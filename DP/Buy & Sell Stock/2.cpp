// class Solution {
// public:
// int solvemem(int index,int buy,vector<int> &prices, vector<vector<int>> &dp){
//     if(index == prices.size()){
//         return 0;
//     }
//     if(dp[index][buy] != -1){
//         return dp[index][buy];
//     }
//     int profit;

//     if(buy){
//         int buy = -prices[index] + solvemem(index+1,0,prices,dp);
//         int ignore = solvemem(index+1,1,prices,dp);
//         profit = max(buy,ignore); 
//     }
//     else{
//         int sell = prices[index] + solvemem(index+1,1,prices,dp);
//         int ignore = solvemem(index+1,0,prices,dp);
//         profit = max(sell,ignore);
//     }
//     return dp[index][buy] = profit;
// }
// int solvetab(vector<int> &prices){
//     int n = prices.size();
//     vector<vector<int>> dp(n+1,vector<int>(2,0));

//     for(int index = n-1;index>=0;index--){
//         for(int buy=0;buy<=1;buy++){
//             int profit;

//     if(buy){
//         int buy = -prices[index] + dp[index+1][0];
//         int ignore = dp[index+1][1];
//         profit = max(buy,ignore); 
//     }
//     else{
//         int sell = prices[index] + dp[index+1][1];
//         int ignore = dp[index+1][0];
//         profit = max(sell,ignore);
//     }
//     dp[index][buy] = profit;
//         }
//     }
//     return dp[0][1];
// }
// int solveOS(vector<int> &prices){
//     int n = prices.size();
//     vector<int> curr(2,0);
//     vector<int> next(2,0);

//     for(int index = n-1;index>=0;index--){
//         for(int buy=0;buy<=1;buy++){
//             int profit;

//     if(buy){
//         int buy = -prices[index] + next[0];
//         int ignore = next[1];
//         profit = max(buy,ignore); 
//     }
//     else{
//         int sell = prices[index] + next[1];
//         int ignore = next[0];
//         profit = max(sell,ignore);
//     }
//     curr[buy] = profit;
//         }
//         next = curr;
//     }
//     return next[1];
// }
//     int maxProfit(vector<int>& prices) {
//         // int n = prices.size();
//         // vector<vector<int>> dp(n,vector<int>(2,-1));
//         // return solvemem(0,1,prices,dp);
//         // return solvetab(prices);
//         return solveOS(prices);
//     }
// };