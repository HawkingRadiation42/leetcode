class Solution {
public:
    int binarySearch(vector<int>& nums, int l, int r, int x){
        if (r >= l) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == x)
                return mid;
            if (nums[mid] > x)
                return binarySearch(nums, l, mid - 1, x);
            return binarySearch(nums, mid + 1, r, x);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {

        return binarySearch(nums, 0, nums.size()-1, target);;
    }
};