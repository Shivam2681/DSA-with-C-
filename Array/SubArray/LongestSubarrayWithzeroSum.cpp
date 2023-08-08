// #include<vector>
// #include<unordered_map>

// int getLongestZeroSumSubarrayLength(vector<int> &arr){
// 	int sum = 0;
// 	int maxlength = 0;
// 	unordered_map<int,int> mpp;

// 	for(int i=0;i<arr.size();i++){
// 		sum += arr[i];

// 		if(sum == 0){
// 			maxlength = i+1;
// 		}
// 		else if(mpp.find(sum) != mpp.end()){
// 			maxlength = max(maxlength ,i - mpp[sum]);
// 		}
// 		else{
// 			mpp[sum] = i;
// 		}
// 	}
// 	return maxlength;
	
// }