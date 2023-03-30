class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size()>1){
            int stones = pq.top();
            pq.pop();
            int stones2 = pq.top();
            pq.pop();
            if(stones>stones2)
                pq.push(stones-stones2);
        }
        return pq.empty() ? 0: pq.top();
    }
};
 // the logic is to remove two max elements from pq and then subtract them and the remaining is added back to the queue and this whole process should finish when there is only 1 element left in the queue
