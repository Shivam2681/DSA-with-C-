// bool searchMatrix(vector<vector<int>> &mat, int target) {
//   // for(int i=0;i<mat.size();i++){
//   //     for(int j=0;j<mat[0].size();j++){
//   //         if(mat[i][j] == target){
//   //             return true;
//   //         }
//   //     }
//   // }
//   // return false;

//   int lo = 0;
//   if (!mat.size())
//     return false;
//   int hi = (mat.size() * mat[0].size()) - 1;

//   while (lo <= hi) {
//     int mid = (lo + (hi - lo) / 2);
//     if (mat[mid / mat[0].size()][mid % mat[0].size()] == target) {
//       return true;
//     }
//     if (mat[mid / mat[0].size()][mid % mat[0].size()] < target) {
//       lo = mid + 1;
//     } else {
//       hi = mid - 1;
//     }
//   }
//   return false;
// }