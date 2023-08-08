// class Solution {
// public:
// int fibonacci(int n) {

// //   vector<int> dp(n + 1, 0);
// //   vector<int> prev(n+1);
// //   vector<int> curr(n+1);
//   int prev = 0;
//   int curr = 1;
//   for (int i = 2; i <= n; i++) {
//     int ans = (prev +  curr);
//     // dp[n] = (ans) % MOD;
//     prev = curr;
//     curr = ans;
//   }
//   return curr;
// }
//     int fib(int n) {
//       if(n==0){
//         return 0;
//       }
//         // if(n==0){
//         //     return 0;
//         // }
//         // if(n==1){
//         //     return 1;
//         // }
//         // return fib(n-1)+fib(n-2);
//         return fibonacci(n);
//     }
// };