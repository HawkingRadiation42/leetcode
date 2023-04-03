class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gastank=0;
        int tcost=0;
        int index=0;
        
        for(int i=0;i<gas.size();i++){
            
            tcost += gas[i]-cost[i];
            gastank += gas[i]-cost[i];
            
            if(gastank<0){
                gastank=0;
                index=i+1;
            }
        }
        if(tcost<0)
            return -1;
        return index;
    }
};