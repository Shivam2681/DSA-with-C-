#include<iostream>
using namespace std;

int sum(int array[],int n){
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=sum+array[i];
    }
    return sum;
    
}

int main(){
    
    int num;
    cin>>num;

    int array[100];

    for (int i = 0; i < num; i++)
    {
        cin>>array[i];
    }
    
    cout<<"sum of elements is "<<sum(array,num);

    return 0;
}