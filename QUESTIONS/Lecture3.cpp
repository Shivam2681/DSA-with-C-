/******* Program to print 1 to N numbers using while loop *******/

#include<iostream>
using namespace std;

int main(){
    //int n;
    //int i=1;
    //cout<<"Enter your no: "<<endl;
    //cin>>n;
//
    //while (i<=n)
    //{
    //    cout<<i<<endl;
    //    i++;
    //}


    /******* Program to print wheather the character is uppercase ,lowercase or a nunber *******/

    //char ch;
    //cout<<"Enter your character: "<<endl;
    //cin>>ch;
//
    //if ((ch>='A')&&(ch<='Z'))
    //{
    //    cout<<"Uppercase "<<endl;
    //}
    //else if ((ch>='a')&&(ch<='z'))
    //{
    //    cout<<"Lowercase "<<endl;
    //}
    //else
    //{
    //    cout<<"Digit is entered"<<endl;
    //}

    /******* Program to print sum of all even no upto N *******/

    //int n;
    //int i=2;
    //cout<<"Enter your no: "<<endl;
    //cin>>n;
    //int sum=0;
//
    //while (i<=n)
    //{
    //    sum = sum + i;
    //    i=i+2;
    //}
    //cout<<sum;
    
    /******* Program to print wheather the no is prime or not using while loop *******/

    int n;
    int i=2;
    cout<<"enter your no:"<<endl;
    cin>>n;
     while (i<n)
     {
         if (n%i != 0)
         {
            cout<<"prime no "<<endl;
            
         }
         else{
             cout<<"Not a prime no"<<endl;
         }i++;
         
     }
    
    return 0;
}