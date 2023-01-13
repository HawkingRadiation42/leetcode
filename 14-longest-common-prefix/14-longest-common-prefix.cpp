class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size()==0)
            return "";
        
        int ans = str[0].length();
            
        for(int i=1;i<str.size();i++){
            int j=0;
            while(j<str[i].length() && str[i][j]==str[0][j])
                j++;
            ans =min(ans, j);
            
        }
        return str[0].substr(0, ans);
    }
};