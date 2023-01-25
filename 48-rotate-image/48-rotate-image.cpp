class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0;i<matrix.size();i++){
            for(int j = i;j<matrix.size();j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            int l=0, r=n-1;
            while(l<r){
                swap(matrix[i][l], matrix[i][r]);
                l++;
                r--;
            }
        }
    }
};