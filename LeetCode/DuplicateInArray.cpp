#include<iostream>
using namespace std;

int duplicate(int array[], int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^array[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }

    return ans;
    
    
}

int main(){
    
    int evenarray[6]= {1,2,3,4,5,3};
    int oddarray[5]= {1,2,3,4,2};

    cout<<"duplicate element in even array is "<<duplicate(evenarray,6)<<endl;
    cout<<"duplicate element in odd array is "<<duplicate(oddarray,5)<<endl;
    return 0;
}