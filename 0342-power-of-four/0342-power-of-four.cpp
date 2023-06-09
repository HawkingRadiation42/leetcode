class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }

        double logvalue = log10(n) / log10(4);
        if(logvalue-int(logvalue)==0){
            return true;
        }
        //using the same logic of power of three
        //first the logvalue is kept as double to check for the logvalue if it is in decimal coz if its in decimal then its not power of four which we check if the decimal log value is same as integer logvalue
        return false;
    }
};