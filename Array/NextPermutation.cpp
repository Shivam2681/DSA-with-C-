// vector<int> nextGreaterPermutation(vector<int> &A) {
//     // next_permutation(A.begin(),A.end());
//     int n = A.size();
//     int index = -1;
//     for(int i=n-2;i>=0;i--){
//         if(A[i] < A[i+1]){
//             index = i;
//             break;
//         }
//     }
//     if(index == -1){
//         reverse(A.begin(),A.end());
//         return A;
//     }

//     for(int i=n-1;i>index;i--){
//         if(A[i] > A[index]){
//             swap(A[i],A[index]);
//             break;
//         }
//     }
//     int s = index+1;
//     int e = n-1;
//     while(s<=e){
//         swap(A[s],A[e]);
//         s++;
//         e--;
//     }

//     return A;
// }