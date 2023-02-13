class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, less<int>> maxheap;
        for(int i=0;i<nums.size();i++){
            maxheap.push(nums[i]);
        }
        while(k>1){
            k--;
            maxheap.pop();
        }
        return maxheap.top();
    }
};