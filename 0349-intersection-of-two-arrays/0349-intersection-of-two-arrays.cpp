class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums;
        int s1 = nums1.size();
        int s2 = nums2.size();
        for (int i = 0;i<s1;i++){
            for (int j = 0;j<s2;j++){
                if (nums1[i]==nums2[j]){
                    nums.push_back(nums1[i]);
                    nums1.erase(nums1.begin()+i);
                    nums2.erase(nums2.begin()+j);
                    s1--;
                    i--;
                    s2--;
                    break;
                }
            }
            if (s1 ==0 || s2==0){
                break;
            }
        }
        set<int> s(nums.begin(), nums.end());

        vector<int> unique(s.begin(), s.end()); 

        return unique;
    }
};