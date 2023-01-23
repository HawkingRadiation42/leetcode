class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        int count = 0;
        
        int previous = intervals[0][1];
        
        for(int i =1;i<intervals.size();i++){
            if(intervals[i][0] <previous){
                count++;
                previous = min(intervals[i][1], previous);
            }
            else {
                previous = intervals[i][1];
            }
        }
        return count;
    }
};