class Solution {
public:
    int minimizeArrayValue(vector<int>& A) {
        long res = 0;
        long sum = 0;
        for (int i = 0; i < A.size(); ++i) {
            sum += A[i];
            res = max(res, (sum+i)/(i+1));
        }
        return res;
    }

};