bool comp(vector<int>a,vector<int>b){
        if(a[0] < b[0])return true;
        if(a[0] == b[0]) return (a[1] > b[1]);
        return false;
    }

class Solution {
public:
    vector<int>st;
    
    void build(int node,int start,int end){
        if(start == end){
            st[node] = 1;
            return;
        }
        int mid = (start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        st[node] = st[2*node]+st[2*node+1];
    }
    int query(int node,int start,int end,int val){
        if(start == end){
            st[node] = 0;
            return start;
        }
        int mid = (start+end)/2;
        int ans,temp = val-st[2*node];
        if(temp <= 0)
            ans = query(2*node,start,mid,val);
        else
            ans = query(2*node+1,mid+1,end,temp);
        st[node] = st[2*node] + st[2*node+1];
        return ans;
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),comp);
        int n = people.size();
        st = vector<int>(4*n+1);
        vector<vector<int>>res(people.size());
        build(1,0,n-1);
        for(int i = 0;i<n;i++){
            int h = people[i][0],k = people[i][1];
            int idx = query(1,0,n-1,k+1);
            res[idx] = people[i];
        }
        return res;
    }
};