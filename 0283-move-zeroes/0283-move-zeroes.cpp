class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        vector<int> arr(s);
        int j =0;
        for (int i = 0 ;i<s;i++){
            if (nums[i] != 0){
                arr[j]=nums[i];
                j++;
            }
        }
        for (int i = j;i<s;i++){
            arr[j]=0;
        }
        for (int i=0;i<s;i++){
            nums[i]=arr[i];
        }
    }
};