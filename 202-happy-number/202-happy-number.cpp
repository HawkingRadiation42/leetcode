class Solution {
public:
    int digitsum(int n){
        int sum =0;
        while(n>0){
            sum = sum+((n%10)*(n%10));
            n = n/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {

        while(1){
            if(n==89)
                return false;
            else if(n==1)
                return true;
            n = digitsum(n);
        }

    }
};