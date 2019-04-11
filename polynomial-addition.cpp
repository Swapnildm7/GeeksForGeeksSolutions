{
#include<bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data, int new_data1)
{
    struct Node* new_node = new Node;
    new_node->coeff  = new_data;
    new_node->pow  = new_data1;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d %d ", temp->coeff,temp->pow);
       temp  = temp->next;
    }
}
void addPolynomial(Node *p1, Node *p2);
void create_node(int x, int y, struct Node **temp)
{
    struct Node *r, *z;
    z = *temp;
    if(z == NULL)
    {
        r =(struct Node*)malloc(sizeof(struct Node));
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = NULL;
    }
    else
    {
        r->coeff = x;
        r->pow = y;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}
 
/* Driver program to test above function*/
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
        struct Node *tail1  = NULL,*tail2 = NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly1,&tail1,x,y);
        }
        
         int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly2,&tail2,x,y);
        }
        
        //show(poly2);
        // printList(poly1);
        // cout<<endl;
        // printList(poly2);
     
        addPolynomial(poly1,poly2);
        
        cout<<endl;
       
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure of Node used
struct Node
{
    int coeff;  // coefficient of the polynomial 
    int pow;   // power of the polynomial 
    Node* next;
};
*/
/* The below method print the required sum of polynomial
p1 and p2 as specified in output  */
void addPolynomial(Node *p1, Node *p2)
{
    //Your code here
    map<int,int> mm;
    Node *t1=p1;
    Node *t2=p2;
    while(t1!=NULL){
        mm[t1->pow]+=t1->coeff;
        t1=t1->next;
    }
    while(t2!=NULL){
        mm[t2->pow]+=t2->coeff;
        t2=t2->next;
    }
    
    for(auto it =(mm.rbegin()); it != prev(mm.rend()); ++it)
    cout<<it->second<<"x^"<<it->first<<" + ";
    //FOR LAST ELEMENT
    cout<<mm.begin()->second<<"x^"<<mm.begin()->first;
}ode* node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
struct node *correctBST( struct node* root );
void Inorder(struct node *root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
int flag=1;
int c=0;
void inorder(struct node *temp,struct node *root){
	if(flag==0){
		return;
	}
	if(temp==NULL&&root==NULL)
		return;
	if(root==NULL){
		flag=0;
		return;
	}
	if(temp==NULL){
		flag=0;
		return;
	}
	if(temp->data==root->data){
	    c++;
	}
	inorder(temp->left,root->left);
	inorder(temp->right,root->right);
}
void insert(struct node *root,int a1,int a2,char lr){
	if(root==NULL)
		return;
	if(root->data==a1){
		switch(lr){
				case 'L':root->left=NewNode(a2);
				break;
				case 'R':root->right=NewNode(a2);
				break;
			}
	}
	insert(root->left,a1,a2,lr);
	insert(root->right,a1,a2,lr);
}
int main()
{   
	int t;
	cin>>t;
	while(t--){
	struct node *root=NULL;
	struct node *temp=NULL;
	int n;
	cin>>n;
	int m=n;
	while(n--){
		int a1,a2;
		char lr;
		cin>>a1>>a2>>lr;
		if(root==NULL){
			temp=NewNode(a1);
			root=NewNode(a1);
			switch(lr){
				case 'L':root->left=NewNode(a2);
				        temp->left=NewNode(a2);
				break;
				case 'R':root->right=NewNode(a2);
				        temp->right=NewNode(a2);
				break;
			}
		}
		else{
			insert(root,a1,a2,lr);
			insert(temp,a1,a2,lr);
		}
	}
	flag=1;
	c=0;
	
	root=correctBST(root);
	inorder(temp,root);
	if(c+1==m){
	    cout<<flag<<endl;
	}
	else{
	    cout<<"0
";
	}
	}
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function
Node is as follows:
struct node
{
    int data;
    struct node *left, *right;
};
*/

void func(node *root,node **first , node ** second , node ** last , node ** prev){
    if(root){
        func(root->left,first,second,last,prev);
        if(*prev && root->data<(*prev)->data){
            if(!*first){
                *first=*prev;
                *second=root;
            }
            else{
                *last=root;
            }
        }
        *prev=root;
        func(root->right,first,second,last,prev);
    }
}

struct node *correctBST( struct node* root )
{
//add code here.
    node *first=NULL,*prev=NULL,*second=NULL,*last=NULL;
    func(root,&first,&second,&last,&prev);
    
    if(first && last){
        swap(&(first->data),&(last->data));
    }
    else if(first && second)
    swap(&(first->data),&(second->data));
    return root;
}