//Approach 1

bool searchMatrix(vector<vector<int>>& mat, int target) 
{
        int m=mat.size();
        int n=mat[0].size();

       /* for(int i=0;i<m;i++)
        {
            
        }*/

        int i=m-1,j=0;

        while(i>=0&&j<n)
        {
            if(mat[i][j]==target)  return true;

            else if(mat[i][j]>target) i--;

            else j++;
        }

        return false;
}



//Approach 2

//It wil work when it is given that value of firsty elememt of row is greater than previous row last element  as It will acts as the Linear Sorted matrix and mid%col == i and mid/col==j
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0,high=n*m-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(matrix[mid/m][mid%m]==target)  return true;

            else if(matrix[mid/m][mid%m]<target) 
            low=mid+1;

               else 
            high=mid-1;
        }

        return false;
    }
};
