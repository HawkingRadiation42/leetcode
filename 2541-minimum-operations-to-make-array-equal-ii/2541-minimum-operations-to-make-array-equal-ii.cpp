class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
 
        long long ans=0, total=0;

        if(k==0) {
            if(nums1==nums2)
                return 0;
            return -1;
        }

        for(int i =0;i<nums1.size();i++){
            int diff = nums1[i]-nums2[i];
            if(diff%k!=0)
                return -1;
            ans+=abs(diff)/k;
            total += diff;
            
        }
        
        if(total==0)
            return ans/2;
        return -1;
    }
};