class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
      int a=1;
      int j=1;
      if (s!=1){
        for (int i = 1;i<s;i++){
        if (nums[i-1] != nums[i]){
            nums[j]= nums[i];
            j++;
            a++;
        }
      }
      }
      else return 1;

      
      return a;  
    }
};