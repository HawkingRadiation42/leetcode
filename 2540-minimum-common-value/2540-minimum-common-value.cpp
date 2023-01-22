class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0)
            return 0;
        if(nums2.size()==0)
            return 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        if(nums1.size()==1 || nums2.size()==1){
            return nums1[0];
        }
        int l=0, r=0;
        while(l<nums1.size() && r<nums2.size()){
            if(nums1[l]!=nums2[r]){
                if(nums1[l]>nums2[r])
                    r++;
                else if(nums2[r]>nums1[l])
                    l++;
            }else if(nums1[l]==nums2[r]){
                return nums1[l];
            }
        }
        return -1;
    }
};