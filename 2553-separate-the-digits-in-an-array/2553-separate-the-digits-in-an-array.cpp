class Solution {
public:
//     vector<int> separateDigits(vector<int>& nums) {
//         vector<int> ans;
//         string s;
//         for(int i=0;i<nums.size();i++){
//             s = to_string(nums[i]);
//             if(s.size()==1){
//                 ans.push_back(s[0]);
//             }
//             cout<<s<<endl;
//             for(int j=0;j<s.size();j++){
//                 cout<<s[j]<<endl;
//                 ans.push_back(s[j]);
//             }
//             s = "";
//         }
//         return ans;
//     }
    
    
    vector<int> separateDigits(vector<int>& nums) {

        int j=0;
        char arr[100]={0};
        vector<int> ans;
        stack<int> stack;
        
        for(int i=0;i<nums.size();i++){
            while (nums[i]){
                stack.push(nums[i]%10);
                nums[i]/=10;
                j++;
            }
            while(!stack.empty()){
                ans.push_back(stack.top());
                stack.pop();
            }
        }
        return ans;
    }
};