class Solution {
public:
    bool areNumbersAscending(string s) {

        int curr=0;
        int prev=0;
        for(int i =0;i<s.size();i++){
            if(isdigit(s[i])){
                curr = curr*10 + (s[i]-'0');
            }else if(curr!=0){
                if(prev>=curr)
                    return false;
                prev = curr;
                curr = 0;
            }
        }
        
        return curr==0 || prev<curr;
    }
};