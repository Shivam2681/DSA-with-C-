// int solveMem(vector<vector<int>>& MAT,int i,int j,int &maxi,vector<vector<int>> &dp){
//     if(i >= MAT.size() || j >= MAT[0].size()){
//         return 0;
//     }
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }

//     int right = solveMem(MAT,i,j+1,maxi,dp);
//     int daigonal = solveMem(MAT,i+1,j+1,maxi,dp);
//     int down = solveMem(MAT,i+1,j,maxi,dp);

//     if(MAT[i][j] == 1){
//         dp[i][j] = 1 + min(right,min(daigonal,down));
//         maxi = max(maxi,dp[i][j]*dp[i][j]);
//         return dp[i][j];
//     } 
//     else{
//         return dp[i][j] = 0;
//     }
// }
// int solveTab(vector<vector<int>> &MAT,int &maxi){
//     int row = MAT.size();
//     int col = MAT[0].size();
//     vector<vector<int>> dp(row+1,vector<int>(col+1,0));
    
//     for(int i = row-1;i>=0;i--){
//         for(int j=col-1;j>=0;j--){
//             int right = dp[i][j+1];
//             int daigonal = dp[i+1][j+1];
//             int down = dp[i+1][j];
    
//     if(MAT[i][j] == 1){
//         dp[i][j] = 1 + min(right,min(daigonal,down));
//         maxi = max(maxi,dp[i][j]*dp[i][j]);
//     }
//     else{
//         dp[i][j] = 0;
//     }
//         }
//     }
//     return dp[0][0];
// }
// int solveSO(vector<vector<int>> &MAT,int &maxi){
//     int row = MAT.size();
//     int col = MAT[0].size();

//     vector<int> curr(col+1,0);
//     vector<int> next(col+1,0);
    
//     for(int i = row-1;i>=0;i--){
//         for(int j=col-1;j>=0;j--){
//             int right = curr[j+1];
//             int daigonal = next[j+1];
//             int down = next[j];
    
//     if(MAT[i][j] == 1){
//         curr[j] = 1 + min(right,min(daigonal,down));
//         maxi = max(maxi,curr[j]*curr[j]);
//     }
//     else{
//         curr[j] = 0;
//     }
//         }
//         next = curr;
//     }
//     return curr[0];
// }

// int maximumAreaSquare(vector<vector<int>>& MAT, int n, int m)
// {
//     // vector<vector<int>> dp(n,vector<int>(m,-1));
//     int maxi = 0;
//     // solveMem(MAT,0,0,maxi,dp);
//     // return maxi;
//     // solveTab(MAT,maxi);
//     // return maxi;
//     solveSO(MAT,maxi);
//     return maxi;
// }
