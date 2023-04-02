class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        int n(potions.size());// a new way to store the value of potions.size in n;
        sort(potions.begin(), potions.end());
        
        for(int i=0;i<spells.size();i++){
            int start(0), end(n);
            // while(start<end){
            //     int mid = start + (end-start)/2;
            //     if((long long)spells[i]* potions[mid] >= success){
            //         end = mid;
            //     }
            //     else{
            //         start = mid+1;
            //     }
            // }
            long require = (success + spells[i] - 1)/spells[i];
            auto it  = lower_bound(potions.begin(), potions.end(), require);
            res.push_back(potions.end() - it);
        }
        return res;
        // the logic is to sort the potions vector to apply binary search 
        // we first using binary search find the starting index of the portions and as we know after the first index all the other index will be also greater than the success value hence subtract the startindex to the number as the number of elements greater than the success variable
        // can also use stl buit in method lowerbound to find the first index.this eliminates the binary search process
    }
};