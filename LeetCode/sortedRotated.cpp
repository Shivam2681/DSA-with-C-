#include<iostream>



using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s = mid +1;
        }
        else
        {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s,int e, int k)
{
    int start = s;
    int end = e;
    int mid = start+(end-start)/2;
    
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        if(arr[mid]<k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch( arr, pivot,n-1, k);
    }
    else{
        return binarySearch( arr,0, pivot-1, k);
    }
}



int main(){
    //int key;
    //cin>>key;
    int arr[6] = {2, 4, 5 ,6, 8, 9,};

    cout<<findPosition(arr,6,5);
    return 0;
}