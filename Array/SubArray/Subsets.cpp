// class Solution {
// public:
// void solve(vector<int>& nums,vector<int> subset,int index,vector<vector<int>>& ans){
//     if(index == nums.size()){
//         ans.push_back(subset);
//         return;
//     }
//     solve(nums,subset,index+1,ans);

//     int element = nums[index];
//     subset.push_back(element);
//     solve(nums,subset,index+1,ans);
// }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> subset;
//         int index = 0;
//         solve(nums,subset,index,ans);
//         return ans;
//     }
// };