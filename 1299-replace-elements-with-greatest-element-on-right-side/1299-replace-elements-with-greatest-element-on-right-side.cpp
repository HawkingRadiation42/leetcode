class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
//         brute force approach n2 time complexity hence TLE 
        // for(int i=0;i<arr.size()-1;i++){
        //     int rightmax=0;
        //     for(int j=i+1;j<arr.size();j++){
        //         rightmax = max(rightmax, arr[j]);
        //     }
        //     arr[i] = rightmax;
        // }
        // arr[arr.size()-1] = -1;
        // return arr;
        
        //optimize one O(N)
        int rightmax = -1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp = arr[i];
            arr[i] = rightmax;
            rightmax = max(rightmax, temp);
        }
        return arr;
    }
};