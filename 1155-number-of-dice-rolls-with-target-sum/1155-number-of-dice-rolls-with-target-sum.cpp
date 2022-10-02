#define ll long long int
class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<ll>> dp(target +1, vector<ll>(n+1));
        int val = 1e9 + 7;
        for(int i=1;i<=min(target, k);i++) {
            dp[i][1] = 1;
        }
        for(int i=1;i<=target;i++) {
            for(int j=2;j<=n;j++) {
                for(int l=1;l<=k;l++) 
                {if(l > i) break;
                dp[i][j] = (dp[i][j]%val + dp[i-l][j-1]%val)%val; }
            }
        }
        return (int)(dp[target][n]);
    }
};