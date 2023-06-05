class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()==1){
            return false;
        }
        if(c.size()==2)
            return true;

        int x1 = c[0][0];
        int y1 = c[0][1];
        int x2 = c[1][0];
        int y2 = c[1][1];

        for(int i=0;i<c.size();i++){
            int xi = c[i][0];
            int yi = c[i][1];
            //slope formula
            if ((yi - y1) * (x2 - x1) != (xi - x1) * (y2 - y1)) {
                return false;
            }    
        }
        return true;
    }
};