class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int i=0;
    int j=nums.size() - 1;
    int a,b,c,d;
    int arr[nums.size()];   
    for (int i = 0; i < nums.size(); i++) {
        arr[i] = nums[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    while (i<j){
        if (arr[i]+arr[j] == target){
            a = arr[i];
            b = arr[j];
            break;
            }
        else if  (arr[i]+arr[j] > target){
            j = j-1;
            }
        else if (arr[i]+arr[j] < target){
            i = i +1;
        }
    }
    j=nums.size() - 1;
    for (i =0 ; i<=j;i++){
        if (a==nums[i]){
            c = i;
            break;
        }
    }
    for (i =0 ; i<=j;i++){
        if (b==nums[i]&& c!=i){
            d = i;
            break;
        }
    }
    
    return {c,d};
    }
};