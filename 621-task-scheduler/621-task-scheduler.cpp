class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26, 0);
        for (auto ch : tasks) 
            v[ch - 'A']++;
        
        int max_count = *max_element(v.begin(), v.end());
        
        int res = (max_count-1) * (n+1);
        for (auto f : v) {
            if (f == max_count)
                res++;
        }
        return max(res, (int)tasks.size());
    }
};