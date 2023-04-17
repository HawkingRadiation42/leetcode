class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target == arr){
            return true;
        }
        if (target.size() != arr.size()) {
            return false;
        }
//      brute force approach 
        
        // sort(target.begin(), target.end());
        // sort(arr.begin(), arr.end());
        // for(int i=0;i<target.size();i++){
        //     if(target[i] != arr[i]){
        //         return false;
        //     }
        // }
        // return true;
        
//         smart approach only n complexity instead of nlogn
        int count[1001] = {0};
        for(int i =0;i<arr.size();i++){
            count[target[i]]++;
            count[arr[i]]--;
        }
        for(int i=0;i<1001;i++){
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
    }
};