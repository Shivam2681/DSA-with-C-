#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter your no ";
    cin>>n;
    int result = 0;
    int i=0;
//
    //while (n!=0)
    //{
    //    
    //int digit = n%10;
//
    //if (digit==1)
    //{
    //    result =  pow(2,i) + result;
    //}
    //n=n/10;
    //i++;
    //
    //}
    //cout<<result<<endl;

    /****** 2nd Method ******/ 
    
    while (n!=0)
    {
        int digit = n%2;
        result = (digit * pow(2,i)) + result;
        n=n/10;
        i++;
    }
    cout<<result<<endl;
    
    
    return 0;
}