// #include <bits/stdc++.h>
// int solveMem(vector<int> weight, vector<int> value, int index, int maxWeight,
//              vector<vector<int>> &dp) {

//   if (index == 0) {
//     if (weight[0] <= maxWeight) {
//       return value[0];
//     } else {
//       return 0;
//     }
//   }

//   if (dp[index][maxWeight] != -1) {
//     return dp[index][maxWeight];
//   }

//   int include = 0;

//   if (weight[index] <= maxWeight) {
//     include = value[index] +
//               solveMem(weight, value, index - 1, maxWeight - weight[index], dp);
//   }
//   int exclude = solveMem(weight, value, index - 1, maxWeight, dp);

//   int ans = max(include, exclude);
//   dp[index][maxWeight] = ans;
//   return dp[index][maxWeight];
// }
// int SolveTab(vector<int> weight, vector<int> value, int n, int maxWeight) {
//   vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));

//   for (int w = weight[0]; w <= maxWeight; w++) {
//     if (weight[0] <= maxWeight) {
//       dp[0][w] = value[0];
//     } 
// 	else {
//       dp[0][w] = 0;
//     }
//   }

//   for (int index = 1; index < n; index++) {
//     for (int w = 0; w <= maxWeight; w++) {
//       int include = 0;

//       if (weight[index] <= w) {
//         include = value[index] + dp[index - 1][w - weight[index]];
//       }
//       int exclude = dp[index - 1][w];

//       dp[index][w] = max(include, exclude);
//     }
//   }
//   return dp[n - 1][maxWeight];
// }
// int spaceOtimised(vector<int> weight, vector<int> value, int n, int maxWeight){

// 	vector<int> prev(maxWeight+1,0);
// 	vector<int> curr(maxWeight+1,0);

	
//   for (int w = weight[0]; w <= maxWeight; w++) {
//     if (weight[0] <= maxWeight) {
//       prev[w] = value[0];
//     } 
// 	else {
//       prev[w] = 0;
//     }
//   }

//   for (int index = 1; index < n; index++) {
//     for (int w = 0; w <= maxWeight; w++) {
//       int include = 0;

//       if (weight[index] <= w) {
//         include = value[index] + prev[w - weight[index]];
//       }
//       int exclude = prev[w];

//       curr[w] = max(include, exclude);
//     }
// 	prev = curr;
//   }
//   return prev[maxWeight];
// }
// int morespaceOtimised(vector<int> weight, vector<int> value, int n, int maxWeight){

// 	vector<int> curr(maxWeight+1,0);

	
//   for (int w = weight[0]; w <= maxWeight; w++) {
//     if (weight[0] <= maxWeight) {
//       curr[w] = value[0];
//     } 
// 	else {
//       curr[w] = 0;
//     }
//   }

//   for (int index = 1; index < n; index++) {
//     for (int w = maxWeight; w >= 0; w--) {
//       int include = 0;

//       if (weight[index] <= w) {
//         include = value[index] + curr[w - weight[index]];
//       }
//       int exclude = curr[w];

//       curr[w] = max(include, exclude);
//     }
//   }
//   return curr[maxWeight];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//   //   vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
//   //   return solveMem(weight, value, n - 1, maxWeight, dp);
// //   return SolveTab(weight, value, n, maxWeight);
//     //  return spaceOtimised(weight,value,n,maxWeight);
// 	 return morespaceOtimised(weight,value,n,maxWeight);
// }