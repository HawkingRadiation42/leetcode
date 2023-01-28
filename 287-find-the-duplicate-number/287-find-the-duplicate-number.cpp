class Solution {
public:
//     int findDuplicate(vector<int>& nums) {

//         int slow =0;
//         int fast =0;
//         do{
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         }while(slow!=fast);
//         slow = 0;
//         while(slow!=fast){
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//         return slow;
//     }
    
    int findDuplicate(vector<int>& nums){
        
        //hashmap concept 

        unordered_map<int, int> mp;
        for(int i= 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto i: mp){
            if(i.second>1){
                return i.first;
            }
        }
        return 0;
    }
};