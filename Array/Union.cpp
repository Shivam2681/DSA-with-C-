// #include <set>
// vector<int> sortedArray(vector<int> a, vector<int> b) {
//   set<int> st;

//   for(int i=0;i<a.size();i++){
//       st.insert(a[i]);
//   }
//   for(int i=0;i<b.size();i++){
//       st.insert(b[i]);
//   }

//   vector<int> ans;
//   for(auto it:st){
//       ans.push_back(it);
//   }
//   return ans;

//   vector<int> unionarr;
//   int i = 0;
//   int j = 0;
//   int n = a.size();
//   int m = b.size();

//   vector<int> Union; // Uninon vector
//   while (i < n && j < m) {
//     if (a[i] <= b[j]) // Case 1 and 2
//     {
//       if (Union.size() == 0 || Union.back() != a[i])
//         Union.push_back(a[i]);
//       i++;
//     } 
//     else // case 3
//     {
//       if (Union.size() == 0 || Union.back() != b[j])
//         Union.push_back(b[j]);
//       j++;
//     }
//   }
//   while (i < n) // IF any element left in arr1
//   {
//     if (Union.back() != a[i]){
//         Union.push_back(a[i]);
//     }
//     i++;
//   }
//   while (j < m) // If any elements left in arr2
//   {
//     if (Union.back() != b[j]){
//       Union.push_back(b[j]);          
//     }
//     j++;
//   }
//   return Union;
// }