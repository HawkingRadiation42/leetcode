class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0){
            return 1;
        }
        
        if(n<0){
            //code for 1/x^n
            n = -(n+1); // to avoid integer overflow when converting from - to positive
            return 1/x*myPow(1/x, n);
        }
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else
            return x*myPow(x*x, n/2);
    }
};