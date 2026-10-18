class Solution {
private:
    double sumofhours(vector<int> arr,int n){
        int s = arr.size();
        double sum =0;
        for(int i=0;i<s;i++){
            int temp = arr[i]%n;
            sum = sum + arr[i]/n;
            if(temp != 0){
                sum = sum + 1;
            }
        }
        return sum;
    }
public:
int minEatingSpeed(vector<int> nums, int h) {
       int maximum = *max_element(nums.begin(), nums.end());
        int low = 1;
        int high = maximum ;
        int ans = nums.size();
        while (low<=high){
            int mid = low+ (high-low)/2;
            double sum = sumofhours(nums,mid);
            if (sum <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
