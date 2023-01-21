class Solution {
public:
    // bool checkString(string s) {
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]=='b'){
    //             if(s[i+1]=='a'){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    bool checkString(string s){
        string str = s;
        sort(str.begin(), str.end());
        if(str==s){
            return true;
        }
        return false;
    }
};