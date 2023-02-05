class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int n=words.size();
        vector<int>dummy(n),p(n);
        int i=0;
        for(auto it: words){
            int l=it.size()-1;
            if ((it[0]=='a' or it[0]=='e' or it[0]=='i' or it[0]=='o' or it[0]=='u')
                and (it[l]=='a' or it[l]=='e' or it[l]=='i' or it[l]=='o' or it[l]=='u'))
                dummy[i++]=1;
            else 
                dummy[i++]=0;
        }
        p[0]=dummy[0];
        
        for(int i=1; i<n; i++){
            p[i]=p[i-1]+dummy[i];
        }
        
        int m=queries.size();
        vector<int>ans(m,0);
        for(int i=0; i<m; i++){
            int start=queries[i][0];
            int finish=queries[i][1];
            
            if(start==0) 
                ans[i]=p[finish];
            else
                ans[i]=p[finish]-p[start-1];
        }
        return ans;
    }
};