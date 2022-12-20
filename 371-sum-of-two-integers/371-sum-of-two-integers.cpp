class Solution {
public:
    int getSum(int a, int b) {
        // if(b==0) return a;
        // int sum = a^b;
        // int carry = (a&b)<<1;
        // sum = getSum(sum,carry);
        // return sum;  
        vector <int> v{a,b};
        return accumulate(begin(v), end(v), 0);
    }
};