// class Solution {
// public:
//  bool isPossiblesol(vector<int>& weights, int N, int M, int mid){
//         int packages = 1;
//         int capacity = 0;
    
//         for(int i=0;i<N;i++){
//             if(capacity + weights[i] <= mid){
//                 capacity += weights[i];
//             }
//             else{
//                 packages++;
//                 if(packages > M || weights[i] > mid){
//                     return false;
//                 }
//                 else{
//                     capacity = weights[i];
//                 }
//             }
//         }
//         return true;
//     }
//     int shipWithinDays(vector<int>& weights, int days) {
//         int N = weights.size();
//         if(days>N){
//             return -1;
//         }
//         int s = 0;
//         int sum = 0;
//         for(int i=0;i<N;i++){
//             sum += weights[i];
//         }
        
//         int e = sum;
//         int ans = -1;
//         int mid = s + (e-s)/2;
        
//         while(s<=e){
//             if(isPossiblesol(weights,N,days,mid)){
//                 ans = mid;
//                 e = mid-1;
//             }
//             else{
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }
// };