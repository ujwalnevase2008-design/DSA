class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int s = nums.size();
       vector<int> arr(s, 0);
        vector<int> ans(2);
        for(int i=0;i<s;i++){
            arr[nums[i]-1]=arr[nums[i]-1] +1;
        }
        for(int i=0;i<s;i++){
            if(arr[i]==2){
                ans[0]=i+1;          
            }
            if (arr[i]==0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};