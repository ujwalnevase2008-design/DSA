class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        ans.push_back(1);
        long long e=1;
        for(int i=1;i<rowIndex+1;i++){
             e=e*(rowIndex+1-i)/i;
            ans.push_back(e);
        }
        return ans;
    }
    
};