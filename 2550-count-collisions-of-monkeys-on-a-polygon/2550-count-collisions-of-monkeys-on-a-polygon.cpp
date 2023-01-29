class Solution {
public:

    int monkeyMove(int n) {
        if(n==3){
            return 6;
        }
        
        if(n==4)
            return 14;
        
        long res = 1, base = 2, mod = 1e9 + 7;
        while (n > 0) {
            if (n % 2)
                res = res * base % mod;
            base = base * base % mod;
            n >>= 1;
        }
        return (res - 2 + mod) % mod;
    }
};