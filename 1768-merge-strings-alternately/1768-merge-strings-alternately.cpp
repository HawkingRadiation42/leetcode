class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        if(word1.size()==word2.size()){
            for(int i=0;i<word1.size();i++){
                res = res+word1[i];
                res = res+word2[i];
            }
        }
        else if(word1.size()>word2.size()){
            for(int i=0;i<word2.size();i++){
                res = res+word1[i];
                res = res+word2[i];
            }
            int i = word1.size()-word2.size();
            int j=0;
            while(i>j){
                res+= word1[word2.size()+j];
                j++;
            }
        }
        else if(word1.size()<word2.size()){
            for(int i=0;i<word1.size();i++){
                res = res+word1[i];
                res = res+word2[i];
            }
            int i = word2.size()-word1.size();
            int j=0;
            while(i>j){
                res+= word2[word1.size()+j];
                j++;
            }
        }
        return res;
    }
};