#include<iostream>
using namespace std;

int ap(int n){
    int nthTerm = 3 * n + 7;
    return nthTerm;
}

int main(){

    int n;
    cin>>n;
    cout<<"nth term of Ap is "<<ap(n);
    
    return 0;
}