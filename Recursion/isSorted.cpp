#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0){
        return true ;
    }
    if(n==1){
        return true ;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        return isSorted(arr+1,n-1);
    }
    
    

}

int main(){
    int arr[6] = { 3,5,6,7,8,9};
    cout<<isSorted(arr,6);
    return 0;
}