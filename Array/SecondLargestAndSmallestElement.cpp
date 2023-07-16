// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     vector<int> ans;

//     int largest = a[0];
//     int smallest = a[0];
//     int Ssmallest = INT_MAX;
//     int slargest = -1;
//     for(int i=1;i<n;i++){
//         if(a[i] > largest){
//             slargest = largest;
//             largest = a[i];
//         }
//         else if(a[i] < largest && a[i] > slargest){
//             slargest = a[i];
//         }
//     }
//     ans.push_back(slargest);
    
//     for(int i=1;i<n;i++){
//         if(a[i] < smallest){
//            Ssmallest = smallest;
//            smallest = a[i];
//         }
//         else if(a[i] != smallest && a[i] < Ssmallest){
//             Ssmallest = a[i];
//         }
//     }
//     ans.push_back(Ssmallest);
//     return ans;
// }
