class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans;
        if(str1+str2!=str2+str1)
            return "";
        
        int len = gcd(str1.length(), str2.length());
        ans = str1.substr(0, len);
        
        return ans;
    }
};