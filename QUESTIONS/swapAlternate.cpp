#include<iostream>
using namespace std;


void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i];
    }
    cout<<endl;
    
}

void swapAlternate(int array[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
           swap(array[i], array[i+1]);
        }
        
    }
    
    
}

int main(){
    
    int evenArray[6]={3,5,2,7,8,3};
    int oddArray[5]={4,2,6,3,1};

    swapAlternate(evenArray, 6);
    //swapAlternate(oddArray, 6);

    printArray(evenArray,6);
    //printArray(oddArray,5);


    

    return 0;
}