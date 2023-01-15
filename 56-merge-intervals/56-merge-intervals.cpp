class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        
        if(intervals.size()<=1) 
            return intervals;
        
        sort(intervals.begin(), intervals.end());
        vector<int> tempinterval = intervals[0];
        
        for(auto it: intervals){
            if(it[0] <= tempinterval[1]){
                tempinterval[1] = max(it[1], tempinterval[1]);
            }
            else{
                output.push_back(tempinterval);
                tempinterval = it;
            }
        }
        output.push_back(tempinterval);
        return output;
    }
};