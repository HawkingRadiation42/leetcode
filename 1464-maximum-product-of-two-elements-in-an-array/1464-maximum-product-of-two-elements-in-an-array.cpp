class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first=0, second=0;
        for(int i=0;i<nums.size();i++){
            if(first < nums[i]){
                second = first;
                first = nums[i];
            }else if(nums[i]>second){
                second = nums[i];
            }
        }
        return (second-1)*(first-1);
    }
};