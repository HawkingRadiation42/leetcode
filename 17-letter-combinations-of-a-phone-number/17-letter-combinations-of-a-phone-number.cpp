class Solution {
public:
    map<int, string> m;
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return ans;
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        
        string currstring = "";
        makecombinations(digits, currstring, 0);
        return ans;
    }
    void makecombinations(string digits, string &currstring, int i){
        if(i==digits.size()){
            ans.push_back(currstring);
            return;
        }
        for(auto letter : m[digits[i]-'0']){
            currstring.push_back(letter);
            makecombinations(digits, currstring, i+1);
            currstring.pop_back();
        }
        return; 
    }
    
};