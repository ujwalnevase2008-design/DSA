class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    k = k % nums.size();

    vector<int> arr(k);

    for (int i = 0; i < k; i++) {
        arr[i] = nums[nums.size() - k + i];
    }

    int j = nums.size() - 1;

    for (int i = nums.size() - k - 1; i >= 0; i--) {
        nums[j] = nums[i];
        j--;
    }

    for (int i = 0; i < k; i++) {
        nums[i] = arr[i];
    }
}
};