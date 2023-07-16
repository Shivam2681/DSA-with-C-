#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int n;
    cout<<"enter your no ";
    cin>>n;
    int result = 0;
    int max = (pow(2,31) - 1);
    int min = pow(-2,32);

    if (result*10 > max/10 || result*10 < min/10 )
    {
       cout<<"0"<<endl;
      
    }
 
 
    while (n!=0)
    {
        
    int digit = n%10;
    result = (result * 10) + digit;
    n=n/10;

    }
    cout<<result<<endl;
    return 0;
}