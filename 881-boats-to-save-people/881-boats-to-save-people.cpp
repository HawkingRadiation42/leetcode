class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boat=0;

        int i=0;
        int j=people.size()-1;

        while(i<=j){
            // lightest person and heaviest person together if less than the limit 
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }
            // heaviest will go alone
            else{
                --j;
            }
            boat++;
        }
        return boat;
    }
};