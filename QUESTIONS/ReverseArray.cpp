#include<iostream>
using namespace std;

void printarray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i];
    }
    
}

void reversearray(int array[], int size){
    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    
    
}

int main(){
    int array[6]={2,4,3,5,4,7};
    
    reversearray(array,6);
    printarray(array,6);
    return 0;
}