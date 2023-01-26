class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int letter = target-'a';
        for(int i =0;i<letters.size();i++){
            int element = letters[i]-'a';
            if(element > letter)
                return letters[i];
        }
        return letters[0];
    }
};