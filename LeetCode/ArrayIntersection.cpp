#include<iostream>
using namespace std;



int intersection(int arr1[],int arr2[], int size,int n){
    int temp;
    int i=0;
    int j=0;
    

    while (i<size && j<n)
    {
        if (arr1[i]==arr2[j])
        {
            temp = arr1[i];
            i++;
            j++;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
        
        
    }
    return temp;
}

int main(){
    
    int arr1[5]={2,4,3,6,7};
    int arr2[3]={3,8};

    cout<<intersection(arr1,arr2,5,3);
    



    return 0;
}