// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

    /********BRUTE FORCE**********/

    // int n = v.size();

    // for(int i=0;i<n;i++){
    //     int cnt = 0;
    //     for(int j=0;j<n;j++){
    //         if(v[i] == v[j]){
    //             cnt++;
    //         }
    //         if(cnt > n/2){
    //             return v[i];
    //         }
    //     }
    // }
    // return -1;

    
    /***********BETTER**********/


        // int n = nums.size();
        // map<int,int> mpp;

        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto i: mpp){
        //     if(i.second > n/2){
        //         return i.first;
        //     }
        // }
        // return -1;


/************OPTIMAL***************/


//         int n = nums.size();
//         int cnt = 0;
//         int element;

//         for(int i=0;i<n;i++){
//             if(cnt == 0){
//                 element = nums[i];
//                 cnt++;
//             }
//             else if(nums[i] == element){
//                 cnt++;
//             }
//             else{
//                 cnt--;
//             }
//         }
//         return element;
//     }
// };