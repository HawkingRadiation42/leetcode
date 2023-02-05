class Solution {
public:
    bool check(int max,vector<int> &a,int k){
        int n=a.size();
        int prev=-2;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<=max&&i-prev>1){
                count++;
                prev=i;
            }
        }
        return count>=k;
    }
    int minCapability(vector<int>& a, int k) {
        int n=a.size();
        int l=0,r=1e9;
        int mid;
        while(l+1<r){
            
            mid=l+(r-l)/2;
            
            if(check(mid,a,k)){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        return r;
    }
};