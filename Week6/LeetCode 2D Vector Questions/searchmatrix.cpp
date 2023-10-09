class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int i=0;
        int j=cols-1;
        bool flag = false;
        while(i<rows&&j>=0)//out of bound
        {
            if(matrix[i][j]==target)
            {
                flag=true;
                break;
            }
            else if(target<matrix[i][j])j--;//go left
            else i++;//go down
        }
        return flag;
    }
};