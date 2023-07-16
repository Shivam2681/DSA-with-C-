#include<iostream>
using namespace std;

int binarysearch(int array[], int n, int key){
     int start = 0;
     int end = n-1;
     int mid = start + (end-start)/2;
     
    while (start <= end)
    {
        if (array[mid]==key)
     {
        return mid;
     }
      if (key>array[mid])
     {
        start = mid + 1;
     }
     else{
        end = mid - 1;
     }
     mid = start + (end-start)/2;

    }
    
     return n;
     
}



int main(){
    int array[5]={3,5,6,7,8};
    int key;
    cout<<"enter your element to search: ";
    cin>>key;
    cout<<"present index is: "<<binarysearch(array,5,key);

    return 0;
}