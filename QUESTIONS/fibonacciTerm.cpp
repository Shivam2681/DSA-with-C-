#include<iostream>
using namespace std;

int fibo(int n){
    int a=0;
    int b=1;
    for (int i = 2; i < n; i++)
    {
        int nextterm = a+b;
        a=b;
        b = nextterm;
        
    }return b;
       
}

int main(){

    int n;
    cin>>n;

    if(n==1){
        cout<<"0";
    }
    else{
        cout<<fibo(n);
    }

    
    return 0;
}