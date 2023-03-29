class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int presum=0, result=0;
        for(int i=0;i<satisfaction.size();i++){
            presum+=satisfaction[i];
            if(presum<0){
                break;
            }
            result+=presum;
        }
        return result;
    }
};