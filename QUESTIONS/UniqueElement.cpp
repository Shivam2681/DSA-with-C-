#include<iostream>
using namespace std;

int unique(int array[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^array[i];
    }
    return ans;
    
}

int main(){
    int array[5]={2,2,5,4,5};

    cout<<"unique element is "<<unique(array,5);
    return 0;
}