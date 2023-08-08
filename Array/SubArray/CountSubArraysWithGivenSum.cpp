// int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // int n = arr.size(); // size of the array.

    // int count = 0;
    // for (int i = 0; i < n; i++) {
    //     long long s = 0;
    //     for (int j = i; j < n; j++) { 
            
    //         s += arr[j];
    //         if (s == k)
    //             count++;
    //     }
    // }
    // return count;



//     int n = arr.size(); // size of the array.

//     int left = 0, right = 0; // 2 pointers
//     int sum = arr[0];
//     int count = 0;
//     while (right < n) {
//         // if sum > k, reduce the subarray from left
//         // until sum becomes less or equal to k:
//         while (left <= right && sum > k) {
//             sum -= arr[left];
//             left++;
//         }

//         // if sum = k, update the maxLen i.e. answer:
//         if (sum == k) {
//             count++;
//         }

//         // Move forward thw right pointer:
//         right++;
//         if (right < n) sum += arr[right];
//     }

//     return count;
// }