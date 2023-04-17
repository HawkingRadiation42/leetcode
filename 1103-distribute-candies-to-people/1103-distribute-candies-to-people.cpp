class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int i=0;
        while(candies>0){
            int candies_given = min(candies, i+1);
            res[i%num_people] += candies_given;
            candies -= candies_given;
            i++;
        }
        return res;
    }
};
