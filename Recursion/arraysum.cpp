#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    else{
       return arr[0] + sum(arr+1,n-1);
    }

}

int main(){
    int arr[5] = {2,4,7,6,8};
    cout<<sum(arr,5);
    return 0;
}