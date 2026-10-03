class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size();
        int min1 = INT_MAX; 
        int max1 = INT_MIN;
        for (int i=0;i<s;i++){
            min1 = min(min1,prices[i]);
            int a = prices[i]-min1;
            max1 = max(a,max1);

        }
        return max1;
    }
};