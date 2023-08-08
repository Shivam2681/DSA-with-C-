// class Solution {
// public:
// bool solveMem(vector<int>& nums, int index,int target, int n,vector<vector<int>> &dp){

// 	if(index >= n){
// 		return 0;
// 	}
// 	if(target < 0){
// 		return 0;
// 	}
// 	if(target == 0){
// 		return 1;
// 	}
// 	if(dp[index][target] != -1){
// 		return dp[index][target];
// 	}

// 	bool incl = solveMem(nums,index+1,target - nums[index],n,dp);
// 	bool excl = solveMem(nums,index+1,target,n,dp);
    
// 	dp[index][target] = incl or excl;
// 	return dp[index][target];
// }
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int total = 0;

// 	    for(int i=0;i<n;i++){
// 		    total += nums[i];
// 	   }

// 	   if(total & 1){
// 	   	return 0;
// 	   }

// 	   int target = total/2;

// 	   vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
// 	   return solveMem(nums,0,target,n,dp);
//     }
// };