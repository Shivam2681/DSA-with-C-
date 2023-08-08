// class Solution {
// public:
// int solveMem(string& text1, string& text2,int i, int j,vector<vector<int>> &dp){
//     if(i == text1.length()){
//         return 0;
//     }
//     if(j == text2.length()){
//         return 0;
//     }
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }
//     int ans;
//     if(text1[i] == text2[j]){
//            ans = 1 + solveMem(text1,text2,i+1,j+1,dp);
//     }
//     else{
//         ans = max(solveMem(text1,text2,i+1,j,dp), solveMem(text1,text2,i,j+1,dp));
//     }
//     dp[i][j] = ans;
//     return dp[i][j];
// }
// int solveTab(string& text1, string& text2){
//     int n = text1.length();
//     int m = text2.length();
//     vector<vector<int>> dp(n+1,vector<int>(m+1,0));

//     for(int i=n-1;i>=0;i--){
//         for(int j=m-1;j>=0;j--){
//             int ans;
//     if(text1[i] == text2[j]){
//            ans = 1 + dp[i+1][j+1];
//     }
//     else{
//         ans = max(dp[i+1][j], dp[i][j+1]);
//     }
//     dp[i][j] = ans;
//         }
//     }
//     return dp[0][0];
// }
//  int solveSpaceOP(string& a, string& b){

//         int n1 = a.length();
//         int n2 = b.length();

//         vector<int> currRow(n2+1, 0);
//         vector<int> nextRow(n2+1, 0);

//         for(int i = n1-1; i>=0; i--){
//             for(int j = n2-1; j>=0; j--){
//                 int ans = 0;

//                 if(a[i] == b[j])
//                     ans = 1 + nextRow[j+1];

//                 else
//                 {
//                     ans = max(nextRow[j], currRow[j+1]);
//                 }

//                 currRow[j] = ans;
//             }

//             nextRow = currRow;
//         }
        
//         return nextRow[0];
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         // vector<vector<int>> dp(text1.length(),vector<int>(text2.length(),-1));
//         // return solveMem(text1,text2,0,0,dp);
//         // return solveTab(text1,text2);
//         return solveSpaceOP(text1,text2);
//     }
// };