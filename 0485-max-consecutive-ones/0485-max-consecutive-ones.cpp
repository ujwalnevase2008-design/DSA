class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0;
        int b =0;
        for (int i = 0;i<nums.size();i++){
            if (nums[i]==1){
                b = b+1;
                if (b>a){
                    a = b;
                }
            }
            else if (nums[i]==0){
                b = 0;
            }
        }
        return  a;
    }
};
