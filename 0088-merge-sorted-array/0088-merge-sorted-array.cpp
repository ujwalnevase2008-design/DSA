class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        
        while(i<m && n>0){
            if (nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                for(j=0;j<n-1;j++){
                    if(nums2[j] > nums2[j+1]) {
                        swap(nums2[j],nums2[j+1]);
                    }
                    else if(nums2[j]<=nums2[j+1]){
                        break;
                    }
                }
            }
            i++;
        }
        for(j=0;j<n;j++){
           nums1[i]=nums2[j];
           i++;
        }
    }
};