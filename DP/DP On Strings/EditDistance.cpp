// class Solution {
// public:
// int solveMem(string word1, string word2,int i,int j, vector<vector<int>> &dp){
//     if(i == word1.length()){
//         return word2.length() - j;
//     }
//     if(j == word2.length()){
//         return word1.length() - i;
//     }
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }

//     if(word1[i] == word2[j]){
//         return solveMem(word1,word2,i+1,j+1,dp);
//     }
//     else{
//         int insert = 1 + solveMem(word1,word2,i,j+1,dp);
//         int deleted = 1 + solveMem(word1,word2,i+1,j,dp);
//         int replace = 1 + solveMem(word1,word2,i+1,j+1,dp);

//         dp[i][j] = min(insert,min(deleted,replace));
//     }
//     return dp[i][j];
// }
// int solveTab(string word1, string word2){
//     int n = word1.size();
//     int m = word2.size();

//     vector<vector<int>> dp(n+1,vector<int>(m+1,0));

//     for(int j=0;j<m;j++){
//         dp[word1.length()][j] = word2.length() - j;
//     }
//     for(int i=0;i<n;i++){
//         dp[i][word2.length()] = word1.length() - i; 
//     }

//     for(int i=n-1;i>=0;i--){
//         for(int j=m-1;j>=0;j--){
//             if(word1[i] == word2[j]){
//                dp[i][j] = dp[i+1][j+1];
//             }
//             else{
//                 int insert = 1 + dp[i][j+1];
//                 int deleted = 1 + dp[i+1][j];
//                 int replace = 1 + dp[i+1][j+1];

//                 dp[i][j] = min(insert,min(deleted,replace));
//             }
//         }
//     }
//     return dp[0][0];
// }
//  int solveSpaceOP(string& a, string& b){

//         int n1 = a.length();
//         int n2 = b.length();

//         vector<int> curr(n2+1, 0);
//         vector<int> next(n2+1, 0);


//         for(int j=0; j<n2; j++){
//             next[j] =  b.length() - j; // as last row is showed by next
//         }

//         for(int i = n1-1; i>=0; i--){
//             for(int j = n2-1; j>=0; j--){

//                 // Important catch from base case
//                 curr[b.length()] = a.length() - i;

//                 int ans = 0;

//                 if(a[i] == b[j])
//                     ans = next[j+1];

//                 else
//                 {
//                     // insert
//                     int insertAns = 1 + curr[j+1];
                    
//                     //delete
//                     int deleteAns = 1 + next[j];
                    
//                     // update
//                     int replaceAns = 1 + next[j+1];

//                     ans = min(insertAns, min(deleteAns, replaceAns));
//                 }
                
//                 curr[j] = ans;
//             }

//             next = curr;
//         }

//         return next[0];
//     }
//     int minDistance(string word1, string word2) {
//         // int n = word1.size();
//         // int m = word2.size();
//         // vector<vector<int>> dp(n,vector<int>(m,-1));
//         // return solveMem(word1,word2,0,0,dp);
//         // return solveTab(word1,word2);
//         if(word1.length() == 0)
//             return word2.length();

//         if(word2.length() == 0)
//             return word1.length();
//         return solveSpaceOP(word1,word2);
//     }
// };