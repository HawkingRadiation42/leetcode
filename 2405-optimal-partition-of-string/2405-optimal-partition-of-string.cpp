class Solution {
public:
    int partitionString(string s) {
        vector<int> last(26, -1); 
        int start = 0, end = 0;   
        int count = 0;            
        while (end < s.size()) {
            int c = s[end] - 'a';
            if (last[c] >= start) { 
                count++;           
                start = end;
            }
            last[c] = end;         
            end++;
        }
        return count + 1;    
    }
};
