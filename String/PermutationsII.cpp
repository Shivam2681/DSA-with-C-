
/**************ALL UNIQUE PERMUTATIONS***************/

// class Solution {
// public:
// void solve(vector<int>& nums,int index,set<vector<int>>& st){
//     if(index >= nums.size()){
//         st.insert(nums);
//         return;
//     }

//     for(int j = index;j<nums.size();j++){
//         swap(nums[index],nums[j]);
//         solve(nums,index+1,st);
//         swap(nums[index],nums[j]);
//     }
// }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         vector<vector<int>> ans;
//         set<vector<int>> st;
//         int index = 0;
//         solve(nums,index,st);
//         for(auto it:st){
//             ans.push_back(it);
//         }
//         return ans;
//     }
// };