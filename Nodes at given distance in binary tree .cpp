class solver
{
private:

public:
        #define pb push_back
    
    unordered_map<Node*,Node*> mm;
    
    void dfs(Node * node, Node * parent){
        if(!node)
            return;
        mm[node]=parent;
        dfs(node->left,node);
        dfs(node->right,node);
        
    }
    
    Node * FindTarget(Node * root,int target){
        
        Node * targetNode = NULL;
        if(!root)
            return NULL;
        
        if(root->left)
            targetNode = FindTarget(root->left,target);
        
        if(root->data==target)
            return root;
        
        if(targetNode ==NULL && root->right)
            targetNode = FindTarget(root->right,target);
        
        return targetNode;
    }
    
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        vector<int> ans;
        dfs(root,NULL);
        
        unordered_set<Node *> vis;
        
        Node * targetNode= FindTarget(root,target);
        
        queue<Node*> q;
        
        int dist=0;
        
        q.push(targetNode);
        vis.insert(targetNode);
        
        
        while(!q.empty()){
            if(dist==k){
                break;
            }
            dist++;
            
            int currlevel=q.size();
             
            for(int i=0;i<currlevel;++i){
                Node * front = q.front();
                q.pop();
                
                // Left Subtree
                if(front->left && vis.find(front->left)==vis.end()){
                    q.push(front->left);
                    vis.insert(front->left);
                }
                
                //Right Subtree
                if(front->right && vis.find(front->right)==vis.end()){
                    q.push(front->right);
                    vis.insert(front->right);
                }
                
                //Parent at dist[k]
                if(mm[front] && vis.find(mm[front])==vis.end()){
                    q.push(mm[front]);
                    vis.insert(mm[front]);
                }
            }    
                
        }
        
        while(!q.empty()){
            ans.pb(q.front()->data);
            q.pop();
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
