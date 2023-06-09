class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int tar = target-'0';
        for(int i=0;i<letters.size();i++){
            if(letters[i]-'0'>tar){
                return letters[i];
            }
        }
        return letters[0];
    }
};