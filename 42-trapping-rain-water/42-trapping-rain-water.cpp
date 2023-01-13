class Solution {
public:
    int trap(vector<int>& h) {
        if (!h.size()) 
            return 0; //edge case
        
        vector<int> left(h.size()), right(h.size()); //vectors to store leftmaximum height and rightmaximum height vector and by default store 0 in them 
        
        left[0]=h[0];
        for(int i=1;i<h.size();i++){
            left[i]=max(left[i-1], h[i]);
        }
        
        right[h.size()-1]=h[h.size()-1];
        for(int i = h.size()-2;i>=0;i--){
            right[i]=max(right[i+1], h[i]);
        }
        
        int ans=0;
        for(int i=0;i<h.size();i++){
            ans+=(min(left[i], right[i])-h[i]);
        }
        
        return ans;
    }
};