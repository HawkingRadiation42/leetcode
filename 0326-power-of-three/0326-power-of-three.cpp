class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }

        double logvalue = log10(n) / log10(3);
        if(logvalue-int(logvalue)==0){
            return true;
        }
        //first the logvalue is kept as double to check for the logvalue if it is in decimal coz if its in decimal then its not power of three which we check if the decimal log value is same as integer logvalue
        return false;
    }
};