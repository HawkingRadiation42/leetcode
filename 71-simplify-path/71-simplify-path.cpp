class Solution {
public:
    string simplifyPath(string path) {
        string res ;
        string dir;
        vector<string> dirs;
        stringstream ss(path);
        while(getline(ss, dir, '/')){
            if(dir=="."||dir ==""){
                continue;
            }
            if(dir == ".."){
                if(!dirs.empty()){
                    dirs.pop_back();
                }
            }
            else{
                dirs.push_back(dir);
            }
        }
        
        for(auto s: dirs ){
            res+="/" + s;
        }
        if(res.empty()){
            return "/";
        }
        return res;
    }
};