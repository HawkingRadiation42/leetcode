/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    
    int findmatches(string w1, string w2){
        int count = 0;
        for(int i=0;i<6;i++){
            if(w1[i] == w2[i]){
                count++;
            }
        }
        return count;
    }
    
    void findSecretWord(vector<string>& words, Master& master) {
        srand(time(0));
        vector<string> candidates;
        for(int i=0;i<words.size();i++){
            candidates.push_back(words[i]);
        }
        while(!candidates.empty()){
            string word = candidates[candidates.size()/2];
            int match = master.guess(word);
            if(match == 6) return;
                
            vector<string> temp;
            for(string w: candidates){
                if(findmatches(w, word) == match){
                    temp.push_back(w);
                }
            }
            candidates = temp;
        }
    }
};