// #include<vector>
// #include<limits.h>

// int subarrayWithMaxProduct(vector<int> &arr){
// 	int n = arr.size();
	// int result = INT_MIN;
	// for(int i=0;i<n-1;i++){
	// 	for(int j=i+1;j<n;j++){
	// 		int product = 1;
	// 		for(int k=i;k<=j;k++){
	// 			product *= arr[k];
	// 		}
	// 		result = max(result,product);
	// 	}
	// }
	// return result;


    // int result = arr[0];
	// for(int i=0;i<n-1;i++){
	// 	int product = arr[i];
	// 	for(int j=i+1;j<n;j++){
	// 		result = max(result,product);
	// 		product *= arr[j];
	// 	}
	// 	result = max(result,product);
	// }
	// return result;


// 	int prefix = 1;
// 	int suffix = 1;
// 	int maxi = INT_MIN;
	
// 	for(int i=0;i<n;i++){
// 		if(prefix == 0){
// 			prefix = 1;
// 		}
// 		if(suffix == 0){
// 			suffix = 1;
// 		}
		
// 		prefix *= arr[i];
// 		suffix *= arr[n-i-1];
		
// 		maxi = max(maxi,max(prefix,suffix));
// 	}
// 	return maxi;
// }