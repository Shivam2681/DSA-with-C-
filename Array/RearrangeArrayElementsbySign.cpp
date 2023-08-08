// vector<int> alternateNumbers(vector<int>&a) {
//     // int n = a.size();
    
//     // vector<int> pos;
//     // vector<int> neg;

//     // for(int i=0;i<n;i++){
//     //     if(a[i] < 0){
//     //         neg.push_back(a[i]);
//     //     }
//     //     else{
//     //         pos.push_back(a[i]);
//     //     }
//     // }

//     // for(int i=0;i<n/2;i++){
//     //     a[2*i] = pos[i];
//     //     a[2*i+1] = neg[i];
//     // }

//     // return a;


/********T.C = O(N)******S.C = O(N)***********/

//     int n = a.size();
  
//   // Define array for storing the ans separately.
//   vector<int> ans(n,0);
  
//   // positive elements start from 0 and negative from 1.
//   int posIndex = 0, negIndex = 1;
//   for(int i = 0;i<n;i++){
      
//       // Fill negative elements in odd indices and inc by 2.
//       if(a[i]<0){
//           ans[negIndex] = a[i];
//           negIndex+=2;
//       }
      
//       // Fill positive elements in even indices and inc by 2.
//       else{
//           ans[posIndex] = a[i];
//           posIndex+=2;
//       }
//   }
  
//   return ans;
// }