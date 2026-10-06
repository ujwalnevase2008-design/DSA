class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = n;
        for (int i=0;i<m/2;i++){    
            for (int j = i ;j<n-1-i;j++){
                swap(matrix[i][j],matrix[n-j-1][i]);
                swap(matrix[n-j-1][i],matrix[n-1-i][n-j-1]);
                swap(matrix[n-1-i][n-j-1],matrix[j][n-1-i]);
            }
             
        }
    }
};