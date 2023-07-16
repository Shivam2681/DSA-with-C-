#include<iostream>
using namespace std;

bool linearsearch(int arr[], int n, int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }else{
        return linearsearch(arr+1,n-1,k);
        
    }
}

int main(){
    int arr[5]={4,2,7,8,9};
    int k = 1 ;
    bool ans = linearsearch(arr,5,k);
    if (ans)
    {
        cout<< "present";
    }
    else{
        cout<< "absent";
    }
    

    return 0;
}