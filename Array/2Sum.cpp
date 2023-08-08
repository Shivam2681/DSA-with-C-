
// string read(int n, vector<int> book, int target)
// {
//     // for(int i=0;i<n;i++){
//     //     for(int j=1;j<n;j++){
//     //         if(book[i] == target-book[j]){
//     //             return "YES";
//     //         }
//     //     }
//     // }
//     // return "NO";


// T.C = O(N) + O(NlogN)

//         sort(book.begin(), book.end());
//         int s = 0;
//         int e = n-1;

//         while(s < e){
//             int sum = book[s] + book[e];
//             if(sum == target){
//                 return "YES";
//             }
//             else if(sum < target){
//                 s++;
//             }
//             else{
//                 e--;
//             }
//         }
//         return "NO";
// }

