#include<iostream>
using namespace std;

void duplicate(int array[], int size){
    int count=0;
    int value=0;

    for (int i = 0; i < size; i++)
    {
        if(array[i]==array[i+1]){
            count++;
            value=array[i];
        }
    }
    count++;
    cout<<"repeated element "<<value<<endl;
    cout<<"repeated value "<<count<<endl;
    
}

int main(){
    int array[5]={1,2,3,3,3};
    duplicate(array,5);
    return 0;
}