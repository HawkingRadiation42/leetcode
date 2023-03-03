class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()<3) return 0;
        
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i])    {
                if(arr[i]>arr[i+1]){
                    return i;
                }
            }
        }
        return 0;
    }
};