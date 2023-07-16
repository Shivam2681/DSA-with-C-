// #include <vector>
// #define MOD 1000000007
// int solveMem(int dice, int faces, int target, vector<vector<int>> &dp) {

//   if (target < 0) {
//     return 0;
//   }
//   if (dice == 0 && target != 0) {
//     return 0;
//   }
//   if (dice != 0 && target == 0) {
//     return 0;
//   }
//   if (dice == 0 && target == 0) {
//     return 1;
//   }
//   if (dp[dice][target] != -1) {
//     return dp[dice][target];
//   }
//   int ans = 0;
//   for (int i = 1; i <= faces; i++) {
//     ans = (ans) % MOD +
//           (solveMem(((dice - 1) % MOD), faces, ((target - i) % MOD), dp)) % MOD;
//   }
//   dp[dice][target] = (ans) % MOD;
//   return dp[dice][target];
// }
// int solveTab(int d, int f, int s) {
//   vector<vector<int>> dp(d + 1, vector<int>(s + 1, 0));
//   dp[0][0] = 1;

//   for (int dice = 1; dice <= d; dice++) {
//     for (int target = 1; target <= s; target++) {
//       int ans = 0;
//       for (int i = 1; i <= f; i++) {
//         if(target - i >=0)
//            ans = (ans) % MOD + dp[dice-1][target-i];
//         }
//         dp[dice][target] = (ans) % MOD;
//     }
//   }
//   return dp[d][s];
// }
// int spaceOptimised(int d, int f, int s){
//   vector<int> prev(s+1,0);
//   vector<int> curr(s+1,0);
//   prev[0] = 1;

//   for (int dice = 1; dice <= d; dice++) {
//     for (int target = 1; target <= s; target++) {
//       int ans = 0;
//       for (int i = 1; i <= f; i++) {
//         if(target - i >=0)
//            ans = (ans) % MOD + prev[target-i];
//       }
//         curr[target] = (ans) % MOD;
//     }
//     prev = curr;
//   }
//   return curr[s];

// }
// int diceThrows(int d, int f, int s) {
// //   vector<vector<int>> dp(d + 1, vector<int>(s + 1, -1));
// //   return solveMem(d, f, s, dp);
//     return solveTab(d,f,s); 
// }