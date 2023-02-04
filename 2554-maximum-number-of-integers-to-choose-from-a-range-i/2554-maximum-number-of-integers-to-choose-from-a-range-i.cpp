class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> notbanned;
        int ans=0;
        int sum=0;
        for(int i=0;i<banned.size();i++)
               notbanned.insert(banned[i]);
        for(int i=1;i<=n;i++){
            if(notbanned.find(i)!=notbanned.end())
                continue;
            sum+=i;
            if(sum>maxSum){
                break;
            }
            ans++;
        }
        return ans;
    }
};