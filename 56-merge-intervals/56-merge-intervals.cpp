class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()<=1) 
            return intervals;
        
        vector<vector<int>> ans;

        sort(intervals.begin(),intervals.end()); //coz they are unsorted in this Q
        int n = intervals.size();
        
        ans.push_back(intervals[0]);
        
        int j =0;
        
        for(int i=1;i<n;i++){
            if(ans[j][1]>=intervals[i][0]){
                // ans[j][1] = intervals[i][1]; //this doesnt work have to use max
                ans[j][1] = max(intervals[i][1], ans[j][1]);

            }
            else{
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};