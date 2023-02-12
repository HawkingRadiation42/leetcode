class Solution {
public:
    vector<vector<string>> res;
    vector<string> path;
    
    vector<vector<string>> partition(string s) {
        dfs(s, 0);
        return res;
    }
    
    void dfs(string s, int start){
        if(start == s.size()){
            res.push_back(path);
            return;
        }
        for(int i=start;i<s.size();i++){
            if(ispalindrome(s, start, i)){
                path.push_back(s.substr(start, i - start + 1));
                dfs(s, i + 1);
                path.pop_back();
            }
        }
    }
    bool ispalindrome(string s, int start, int end ){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
};