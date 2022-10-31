class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if (n==0){
            return true;
        }
        int count=0;
        for(int i=0;i<f.size();i++){
            if(f[i]==0){
                
                int prev = (i == 0 || f[i - 1] == 0) ? 0 : 1;
                int next = (i == f.size() - 1 || f[i + 1] == 0) ? 0 : 1;
                if(prev == 0 && next == 0){
                    f[i] = 1;
                    count++;
                }
            }
        }
        return count>=n;
    }
};