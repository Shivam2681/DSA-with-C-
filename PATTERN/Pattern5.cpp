#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cout<<"Enter no of row: ";
    cin>>n;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<" * ";
            col++;
        }cout<<endl;
        row++;
    }
    return 0;
}