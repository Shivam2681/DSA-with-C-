#include<iostream>
using namespace std;

int getMax(int arr[], int n){

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int array[], int size){

    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(array[i]<min){
           min = array[i];
        }
    }
    return min;
}

int main(){
    
    int size;
    cout<<"enter size: ";
    cin>>size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }

    cout<<"Maximum no is "<<getMax(arr,size)<<endl;
    cout<<"Minimum no is "<<getmin(arr,size)<<endl;
    
    return 0;
}