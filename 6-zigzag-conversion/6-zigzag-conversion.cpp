class Solution {
public:
    string convert(string s, int n) {
        if (n==1)
            return s;
        string res = "";
        for(int i=0;i<n;i++){
            int increment = 2*(n-1);
            for(int j = i;j<s.size();j+=increment){
                res+=s[j];
                if(i>0 && i<s.size()-1 && (increment+j-2*i)<s.size() && j!= (increment+j-2*i)){
                    res+=s[increment+j-2*i];
                }
            }
        }
        return res;
    }
};