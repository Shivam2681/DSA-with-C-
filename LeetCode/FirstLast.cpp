#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n ,int key)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
    
}
int lastoccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans; 
}

int main(){
    int key;
    cin>>key;
    int arr[5]={1,1,2,4,5};

    cout<<firstoccurence(arr, 5 , key);
    
    cout<<lastoccurence(arr, 5 , key)<<endl;

    cout<<"total no of ocuurence "<<lastoccurence(arr, 5 , key) - firstoccurence(arr, 5 , key)+1;
    

    
    return 0;
}