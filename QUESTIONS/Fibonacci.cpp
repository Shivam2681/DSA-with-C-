#include<iostream>
using namespace std;

int main(){
    
    int a=0;
    int b=1;
    int n;
    cout<<"enter your no: "<<endl;
    cin>>n;
    int sum=0;

    cout<<a <<" "<<b<<" ";

    for ( int i = 1; i <=n; i++)
    {
        int nextnumber = a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
        
    }
    
    
    
    return 0;
}