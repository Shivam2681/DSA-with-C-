// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int countstairs(int nStairs,vector<int> &dp,int i){
//     if(i == nStairs){
//         return 1;
//     }

//     if(i > nStairs){
//         return 0;
//     }

//     if(dp[i] != -1){
//         return dp[i];
//     }

//     dp[i] = (countstairs(nStairs,dp,i+1) + countstairs(nStairs,dp,i+2)) % MOD;
//     return dp[i];  
// }
// int countDistinctWays(int nStairs) {
//     vector<int> dp(nStairs,-1);
//     return countstairs(nStairs,dp,0);
// }