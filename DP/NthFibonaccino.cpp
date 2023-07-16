// int fibonacci(int n,vector<int> &dp){
//         if(n==0 || n==1){
//             return n;
//         }

//         if(dp[n] != -1){
//                 return dp[n];
//         }

//         dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);

//         return dp[n];
// }

// int main()
// {
//         int n;
//         cin>>n;
//         vector<int> dp(n+1,-1);
//         cout << fibonacci(n,dp) << endl;

//         return 0;
// }

// int main()
// {
//         int n;
//         cin>>n;
        
//         int prev1 = 1;
//         int prev2 = 0;
        
//         if(n==0){
//             return prev2;
//         }
        
//         for(int i=2;i<=n;i++){
//             int curr = prev1 + prev2;
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         cout<< prev1 << endl;

//         return 0;
// }