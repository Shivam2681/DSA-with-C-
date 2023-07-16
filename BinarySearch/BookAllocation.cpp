// #include <bits/stdc++.h> 
// bool isPossiblesol(vector<int> &pages,int n, int b, int mid){
// 	int ninjacount = 1;
// 	int pagesum = 0;

// 	for(int i=0;i<n;i++){
// 		if(pagesum + pages[i] <= mid){
// 			pagesum += pages[i];
// 		}
// 		else{
// 			ninjacount++;
// 			if(ninjacount > b || pages[i] > mid){
// 				return false;
// 			}
// 			else{
// 				pagesum = pages[i];
// 			}
// 		}
// 	}
// 	return true;
// }

// int allocateBooks(vector<int> &pages, int n, int b)
// {
// 	if(b>n){
// 		return -1;
// 	}
// 	int s = 0;
// 	int sum = 0;

// 	for(int i=0;i<n;i++){
// 		sum += pages[i];
// 	}
// 	int e = sum;
// 	int ans = -1;

// 	int mid = s+(e-s)/2;

// 	while(s<=e){
// 		if(isPossiblesol(pages,n,b,mid)){
// 			ans = mid;
// 			e = mid-1;
// 		}
// 		else{
// 			s = mid + 1;
// 		}
// 		mid = s+(e-s)/2;
// 	}
// 	return ans;
// }