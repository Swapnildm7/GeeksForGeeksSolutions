class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        if(rows==0){
            return false;
        }
        int coloumns=matrix[0].size();
        if(coloumns==0){
            return false;
        }
        int i=0,j=coloumns-1;
        if(target<matrix[0][0] || target>matrix[rows-1][coloumns-1]){
            return false;
        }
        while(i<rows && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            if(matrix[i][j]>target)j--;
            else i++;
        }
        return false;
    }
};