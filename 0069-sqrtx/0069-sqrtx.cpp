class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int start = 1;
        int end = x/2;
        while(start<=end){
            int mid = start+(end-start)/2;
            long long square = (long long)mid * mid;
            
            if(square == x){
                return mid;
            }
            else if(square<x){
                start = mid+1;
            }
            else if(square>x){
                end = mid-1;
            }
        }
        return end;
    }
};