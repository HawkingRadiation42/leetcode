class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        
        priority_queue <int> pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        int dummy=0;
        while(k>0) {
            dummy = pq.top();
            pq.pop();
            pq.push(sqrt(dummy));
            k--;
        }
        while (pq.empty() == false){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
