class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int>ans;
        ans.push_back(1);
        int e=1;
        for(int i=1;i<r;i++){
             e=e*(r-i)/i;
            ans.push_back(e);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(pascalTriangleII(i));
        }
        return ans;
    
    }
};