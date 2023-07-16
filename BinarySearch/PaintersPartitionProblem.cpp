//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
/****GFG*****/
class Solution
{
  public:
    bool isPossiblesol(int arr[], int N, int M, int mid){
        int painters = 1;
        int timesum = 0;
    
        for(int i=0;i<N;i++){
            if(timesum + arr[i] <= mid){
                timesum += arr[i];
            }
            else{
                painters++;
                if(painters > M || arr[i] > mid){
                    return false;
                }
                else{
                    timesum = arr[i];
                }
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        //  if(k>n){
        //     return -1;
        // }
        int s = 0;
        long long int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        
        long long int e = sum;
        long long int ans = -1;
        long long int mid = s + (e-s)/2;
        
        while(s<=e){
            if(isPossiblesol(arr,n,k,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
/*******CodeStudio*******/
bool isPossiblesol(vector<int>& boards, int N, int M, int mid){
        int painters = 1;
        int timesum = 0;
    
        for(int i=0;i<N;i++){
            if(timesum + boards[i] <= mid){
                timesum += boards[i];
            }
            else{
                painters++;
                if(painters > M || boards[i] > mid){
                    return false;
                }
                else{
                    timesum = boards[i];
                }
            }
        }
        return true;
    }
int findLargestMinDistance(vector<int> &boards, int k)
{
    int N = boards.size();
        if(k>N){
            return -1;
        }
        int s = 0;
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += boards[i];
        }
        
        int e = sum;
        int ans = -1;
        int mid = s + (e-s)/2;
        
        while(s<=e){
            if(isPossiblesol(boards,N,k,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
}