// The Brute force of the solution is very easy to implement and the an auxilliary matrix is taken so as to update the values from the input matrix.
// Time Complexity -- O(N2)
// Space Complexity -- O(N2)
// The optimal solution of the problem is to take the transpose of the matrix and then reverse every row present in the matrix.
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
       int n = matrix.size();
       for(int i=0; i<n-1; i++)
       {
           for(int j=i+1; j<n; j++)
           {
               swap(matrix[i][j],matrix[j][i]);
           }
       }
       for(int i=0; i<n; i++)
       {
           reverse(matrix[i].begin(), matrix[i].end());
       }     
    }
};
