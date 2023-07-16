// class Solution {
// public:
// int solveMem(vector<int>& satisfaction,int index,int time,vector<vector<int>> &dp){
//     if(index == satisfaction.size()){
//         return 0;
//     }

//     if(dp[index][time] != -1){
//         return dp[index][time];
//     }

//     int include = satisfaction[index]*(time+1) + solveMem(satisfaction,index+1,time+1,dp);
//     int exclude = 0 + solveMem(satisfaction,index+1,time,dp);

//     int ans = max(include,exclude);
//     dp[index][time] = ans;
//     return dp[index][time];
// }
// int solveTab(vector<int>& satisfaction,int index,int time){
//     int n = satisfaction.size();
//     vector<vector<int>> dp(n+1,vector<int>(n+1,0));

//     for(int index = n-1;index>=0;index--){
//         for(int time = index;time>=0;time--){
//             int include = satisfaction[index]*(time+1) + dp[index+1][time+1];
//     int exclude = 0 + dp[index+1][time];

//     int ans = max(include,exclude);
//     dp[index][time] = ans;
//         }
//     }
//     return dp[0][0];

// }
// int spaceOtimised(vector<int>& satisfaction,int index,int time){
//     int n = satisfaction.size();
//     vector<int> curr(n+1,0);
//     vector<int> next(n+1,0);
//     for(int index = n-1;index>=0;index--){
//         for(int time = index;time>=0;time--){
//             int include = satisfaction[index]*(time+1) + next[time+1];
//     int exclude = 0 + next[time];

//     int ans = max(include,exclude);
//     curr[time] = ans;
//         }
//         next = curr;
//     }
//     return next[0];


// }
//     int maxSatisfaction(vector<int>& satisfaction) {
//         sort(satisfaction.begin(),satisfaction.end());
//         int n = satisfaction.size();
//         // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
//         // return solveMem(satisfaction,0,0,dp);
//         // return solveTab(satisfaction,n-1,n-1);
//         return spaceOtimised(satisfaction,n-1,n-1);
//     }
// };