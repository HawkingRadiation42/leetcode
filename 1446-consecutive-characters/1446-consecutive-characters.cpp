class Solution {
public:
    int maxPower(string s) {
        int count=0, maxcount=0;
        int prev = s[0];
        for(auto letter: s){
            if(letter == prev){
                count++;
                maxcount = max(maxcount, count);
            }
            else
                count = 1;
            
            maxcount = max(maxcount, count);
            prev = letter;
        }
        return maxcount;
    }
};