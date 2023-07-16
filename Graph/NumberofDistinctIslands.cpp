// #include<vector>
// #include<set>
// bool dfs(int n,int m,int row,int col,vector<vector<int>> &vis,int** arr,vector<pair<int,int>> &v,
// int row0,int col0){
//     vis[row][col] = 1;
//     v.push_back({row-row0,col-col0});

      
//     int drow[] = {-1,0,1,0};
//     int dcol[] = {0,1,0,-1};

//     for(int i=0;i<4;i++){
//         int nrow = row + drow[i];
//         int ncol = col + dcol[i];

//         if(nrow>=0 && nrow<n && ncol>=0 && ncol < m && arr[nrow][ncol] == 1 && !vis[nrow][ncol]){
//             dfs(n,m,nrow,ncol,vis,arr,v,row0,col0);
//         }
//     }
// }
// int distinctIslands(int** arr, int n, int m)
// {
//     vector<vector<int>> vis(n,vector<int>(m,0));
//     set<vector<pair<int,int>>> s;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(!vis[i][j] && arr[i][j] == 1){
//                 vector<pair<int,int>> v;
//                 dfs(n,m,i,j,vis,arr,v,i,j);
//                 s.insert(v);
//             }
//         }
//     }
//     return s.size();
// }