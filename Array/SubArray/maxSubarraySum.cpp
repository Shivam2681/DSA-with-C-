// #include <bits/stdc++.h> 
// long long maxSubarraySum(int arr[], int n)
// {
//     // long long int maxi = 0;
//     // for(long long int i=0;i<n;i++){
//     //     long long int sum = 0;
//     //     for(long long int j=i;j<n;j++){
//     //         sum += arr[j];
//     //         maxi = max(maxi,sum);
//     //     }
//     // }
//     // return maxi;

//     long long int maxi = INT_MIN;
//     long long int sum = 0;
//     for(long long int i=0;i<n;i++){
//         sum += arr[i];
//         maxi = max(maxi,sum);
//         if(sum < 0){
//            sum = 0;
//         }
//     }
//     if(maxi < 0){
//         return 0;
//     }
//     return maxi;
    
// }