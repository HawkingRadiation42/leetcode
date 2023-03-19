class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0, odd=0;
        string s = "";
        while(n){
            if(n%2) s+='1';
            else s += '0';
            n/=2;
        }
        for(int i=0;i<s.size();i++){
            if(i%2==0 && s[i]=='1'){
                even++;
            }
            if(i%2==1 && s[i]=='1'){
                odd++;
            }
        }
        return {even, odd};
    }
};