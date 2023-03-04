class Solution {
public:
    int strStr(string h, string n) {
        // naive approach to solve it O(mn)
        if(n=="")
            return 0;
        if(h==n)
            return 0;
        
        int j=0, i=0; //for smaller string, // for larger 
        
        while(i<h.size() && j<n.size()){
            if(h[i]==n[j]){
                i++;
                j++;
                
                if(j==n.size())
                    return i-j;
            }
            else{
                i=i-j+1; //when no strings matched it will go back to to the starting +1 index 
                j=0;
            }
        }
        return -1;

    }
};