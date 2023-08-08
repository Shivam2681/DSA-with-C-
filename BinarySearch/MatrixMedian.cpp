// int countSmallerThanMid(vector<int> &row, int mid)
// {
//   int l = 0, h = row.size() - 1;
//   while (l <= h)
//   {
//     int md = (l + h) >> 1;
//     if (row[md] <= mid)
//     {
//       l = md + 1;
//     }
//     else
//     {
//       h = md - 1;
//     }
//   }
//   return l;
// }
// int median(vector<vector<int>> &matrix, int m, int n) {
//     // vector<int> ans;
//     // for(int i=0;i<m;i++){
//     //     for(int j=0;j<n;j++){
//     //         ans.push_back(matrix[i][j]);
//     //     }
//     // }

//     // sort(ans.begin(),ans.end());
//     // int s=0;
//     // int e = ans.size()-1;
//     // int mid = s+e/2;
//     // return ans[mid];

//   int low = 1;
//   int high = 1e9;
//   while (low <= high)
//   {
//     int mid = (low + high) >> 1;
//     int cnt = 0;
//     for (int i = 0; i < m; i++)
//     {
//       cnt += countSmallerThanMid(matrix[i], mid);
//     }
//     if (cnt <= (m * n) / 2)
//       low = mid + 1;
//     else
//       high = mid - 1;
//   }
//   return low;
// }