class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        if(digits.size()==1 ){
            if(digits[0] == 9){
                digits[0] = 1;
                digits.push_back(0); 
                return digits;
            }
            else{
                digits[0] = digits[0]+1;
                return digits;
            }
                
        }
        for(int i=n;i>=0;i--){
            if(digits[i]+1>9){
                digits[i] = digits[i]-9;
                if(i==0)
                    digits.insert(digits.begin(),1);
            }
            else {
                digits[i]  = digits[i]+1;
                break;
            }          
        }
        return digits;
    }
};