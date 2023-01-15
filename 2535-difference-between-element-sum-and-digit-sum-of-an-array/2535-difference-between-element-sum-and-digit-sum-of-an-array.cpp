class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int Esum=0;
        int Dsum=0;
        for(int i=0;i<nums.size();i++){
            Esum=Esum+nums[i];
            while(nums[i] > 0){
                Dsum += nums[i]%10;
                nums[i] = nums[i]/10;
            }
        }
        
        return Esum-Dsum;
    }
};