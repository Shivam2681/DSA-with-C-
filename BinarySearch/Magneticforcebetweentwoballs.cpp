// class Solution {
// public:
// bool isPossiblesol(vector<int> &position, int m ,int mid){
//     int BallsCount = 1;
//     int lastposition = position[0];

//     for(int i=1;i<position.size();i++){
//         if(position[i]-lastposition >= mid){
//             BallsCount++;
//             if(BallsCount == m){
//                 return true;
//             }
//             lastposition = position[i];
//         }
//     }
//     return false;
// }
//     int maxDistance(vector<int>& position, int m) {
//         sort(position.begin(),position.end());

//     int s=0;
//     int maxi = -1;

//     for(int i=0;i<position.size();i++){
//         maxi = max(maxi,position[i]);
//     }
//     int e =maxi;
//     int ans = -1;
//     int mid = s+(e-s)/2;

//     while(s<=e){
//         if(isPossiblesol(position,m,mid)){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
//     }
// };