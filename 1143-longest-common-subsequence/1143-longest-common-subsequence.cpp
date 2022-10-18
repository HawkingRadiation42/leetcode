class Solution {
public:
    int longestCommonSubsequence(string x, string y) {
        int s1 = x.size();
        int s2 = y.size();
        int lcs[s1+1][s2+1];
        for(int i=0;i<=s1;i++){
            for(int j=0;j<=s2;j++){
                if(i==0 || j==0){
                    lcs[i][j]=0;
                }
                else if(x[i-1]==y[j-1]){
                    lcs[i][j] = 1+lcs[i-1][j-1];
                }
                else {
                    lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
                }
            }
        }
        return lcs[s1][s2];
    }
};