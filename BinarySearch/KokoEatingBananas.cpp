// int reqhours(vector<int> &v,int n,int hourly){
//     int totalH = 0;

//     for(int i=0;i<n;i++){
//         totalH += ceil((double)(v[i]) / (double)(hourly));;
//     }
//     return totalH;
// }
// int minimumRateToEatBananas(vector<int> v, int h) {
//     int n = v.size();
//     int maxi = 0;
//     for(int i=0;i<n;i++){
//         maxi = max(maxi,v[i]);
//     }
//     int s = 1;
//     int e = maxi;
//     int mid = s+(e-s)/2;
    
//     while(s<=e){
//         if(reqhours(v,n,mid) <= h){
//             e = mid-1;
//         } else {
//           s = mid + 1;
//         }
//         mid = s + (e-s) / 2;
//     }
//     return s;
// }