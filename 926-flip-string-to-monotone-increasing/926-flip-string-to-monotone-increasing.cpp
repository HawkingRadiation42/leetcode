class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flips = 0;
        int ones = 0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ++ones;
            }else if(ones>0){
                ++flips;
                --ones;
            }
        }
        return flips;
    }
};