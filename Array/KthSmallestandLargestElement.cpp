// #include <bits/stdc++.h>
// vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
// {
// 	vector<int> ans;
// 	sort(arr.begin(),arr.end());

// 	if(n == k){
// 		ans.push_back(arr[n-1]);
// 		ans.push_back(arr[0]);
// 	}
// 	for(int i=0;i<n;i++){
// 		if(i == k-1){
// 			ans.push_back(arr[i]);
// 		}
// 	}

// 	for(int i=n-1;i>=0;i--){
// 		if(i == n-k){
// 			ans.push_back(arr[i]);
// 		}
// 	}

// 	return ans;
// }