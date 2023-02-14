class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<vector<int>> pq;
        
        
        for(int i=0;i<points.size();i++){
            int x = points[i][0], y = points[i][1];
            pq.push({x*x+y*y, x, y});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            vector<int> top = pq.top(); // as there is an overhead of the multiplication value as well
            pq.pop();
            res.push_back({top[1], top[2]});
        }
        return res;
    }
};