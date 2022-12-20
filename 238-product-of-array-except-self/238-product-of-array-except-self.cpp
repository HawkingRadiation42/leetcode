class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int prod = nums[len-1];
        vector<int> res(len);
        if(!len){
            return res;
        }
        res[0]=1;
    
        for(int i =1;i<nums.size();i++){
            res[i] = res[i-1]*nums[i-1];
        }
        for(int i = --len-1; i>=0;--i){
            res[i]*=prod;
            prod *= nums[i];
        }
        return res;
    }
};