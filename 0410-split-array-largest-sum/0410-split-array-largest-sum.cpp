class Solution {
public:
    bool canSplit(std::vector<int>& nums, int k, long long max_sum) {
        int subarrays = 1;
        long long current_sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (current_sum + nums[i] > max_sum) {
                subarrays++;
                current_sum = nums[i];
            } else {
                current_sum += nums[i];
            }
        }
        
        return subarrays <= k;
    }

    int splitArray(std::vector<int>& nums, int k) {
        long long low = 0;
        long long high = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > low) {
                low = nums[i];
            }
            high += nums[i];
        }

        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};