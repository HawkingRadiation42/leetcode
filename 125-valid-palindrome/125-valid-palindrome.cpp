class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        
        while(l<r){
            if(!isalnum(s[l])){ //isalnum is used to check if the character is alpha numeric or not
                l++;
            }
            else if(!isalnum(s[r])){
                r--;
            }
            else if(tolower(s[l])!=tolower(s[r])){ //to lower the characters as there are capital letters present too
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};