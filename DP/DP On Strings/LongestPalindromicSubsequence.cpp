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
//     int longestPalindromeSubseq(string s) {
//         int n = s.length();
//         string revstr = s;
//         reverse(revstr.begin(), revstr.end());
//         vector<vector<int>> dp(n,vector<int>(n,-1));
//         return solveMem(s,revstr,0,0,dp);
//     }
// };