class Solution {
public:
    string interpret(string c) {
        string res;
        string s="";
        for(char ch: c){
            s+=ch;
            if(s=="G"){
                res+="G";
                s = "";
            }
            else if(s=="()"){
                res+="o";
                s="";
            }
            else if(s=="(al)"){
                res+="al";
                s="";
            }
        }
        return res;
    }
};