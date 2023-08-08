// bool isPossiblesol(vector<int>& boards, int N, int M, int mid){
//         int painters = 1;
//         int timesum = 0;
    
//         for(int i=0;i<N;i++){
//             if(timesum + boards[i] <= mid){
//                 timesum += boards[i];
//             }
//             else{
//                 painters++;
//                 if(painters > M || boards[i] > mid){
//                     return false;
//                 }
//                 else{
//                     timesum = boards[i];
//                 }
//             }
//         }
//         return true;
//     }
// int largestSubarraySumMinimized(vector<int> a, int k) {
//     int N = a.size();
//         if(k>N){
//             return -1;
//         }
//         int s = 0;
//         int sum = 0;
//         for(int i=0;i<N;i++){
//             sum += a[i];
//         }
        
//         int e = sum;
//         int ans = -1;
//         int mid = s + (e-s)/2;
        
//         while(s<=e){
//             if(isPossiblesol(a,N,k,mid)){
//                 ans = mid;
//                 e = mid-1;
//             }
//             else{
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
// }