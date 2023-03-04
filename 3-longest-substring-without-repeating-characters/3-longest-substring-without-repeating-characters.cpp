class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        int ans = 0;
        unordered_set<char> set;
        
        while(i<s.size() && j<s.size()){
            
            if(set.count(s[j])==0){
                set.insert(s[j++]);
                ans = max(ans, j-i);
            }
            else{
                set.erase(s[i++]);
            }
        }
        return ans;
    }
    
};