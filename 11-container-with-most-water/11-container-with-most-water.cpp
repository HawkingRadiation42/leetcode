class Solution {
public:
    
    
    int maxArea(vector<int> &height){
        int l = 0, r = height.size()-1;
        int maxarea = INT_MIN;
        
        while(l<r){
            maxarea = max(maxarea,min(height[l], height[r]) * (r-l));
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }    
        return maxarea;
    }
    
};