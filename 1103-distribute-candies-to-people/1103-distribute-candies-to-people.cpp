class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int i=0;
        //  concept is to run a while loop till the candies arent finished 
//         the number of candies assigned is calculated using whichever is minimum remaining candies or i+1 which is to be distributed 
        while(candies>0){
            int candies_given = min(candies, i+1);
            res[i%num_people] += candies_given; // here we using modular for iteration eg 012, 012 again and agin for increasing value of i 
            candies -= candies_given; // deduct the candies assigned to the person
            i++;
        }
        return res;
    }
};
