class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int res = 0;
        unordered_map<char,int> map;
        priority_queue<int>q;
        for(auto t: tasks){
            map[t]++;
        }
        for (auto& t : map) {
            q.push(t.second);
        }
        
        int intervals=0;
        while(!q.empty()){
            vector<int> temp;
            int k = n+1;
            while(k>0 && !q.empty()){
                k--;
                int t = q.top();
                q.pop();
                intervals++;
                if(t>1){
                    temp.push_back(t-1);
                }
            }
            for (int t : temp) {
                q.push(t);
            }
            if (q.empty()) {
                break;
            }
            intervals += k;
        }
        return intervals;
    }
};