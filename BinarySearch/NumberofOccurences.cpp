#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    return 0;
}
int lastoccurence(vector<int>& arr,int n, int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -2;
    
    while(s<=e){
        if(arr[mid]==x){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]<x){
            s = mid+1;
        }
        else if(arr[mid]>x){
            e = mid - 1;
        }
		
        mid = s+(e-s)/2;
    }
    return ans; 
    
}
int firstoccurence(vector<int>& arr,int n, int x){
   int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==x){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<x){
            s = mid+1;
        }
        else if(arr[mid]>x){
            e = mid -1;
        }
		
        mid = s+(e-s)/2;
    }
    return ans;
    
}
int count(vector<int>& arr, int n, int x) {
	if(n==0){
		return 0;
	}
	return lastoccurence(arr,n,x) - firstoccurence(arr,n,x) +1;
}
