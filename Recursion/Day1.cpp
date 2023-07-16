#include<iostream>
using namespace std;

/****    factorial of a number    ****/

/*int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    int fact = n * factorial(n-1);
    return fact;
}*/

/****   Power of 2   ****/

/*int power(int n){

    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}*/

void print(int n){

    if(n==0){
        return ;
    }
    print(n-1);

    cout<< n <<endl;
}

int main(){
    int n;
    cin>>n;
    //cout<<factorial(n);
    //cout<<power(n);
    print(n);
    return 0;
}