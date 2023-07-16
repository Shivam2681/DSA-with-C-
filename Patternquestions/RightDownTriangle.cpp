#include <iostream>
using namespace std;

int main() {
 
  int size;
  cin>>size;
  int i=1;
  while (i<=size)
  {
    int j=1,space=1;
    while(space<i){
        cout<<" ";
        space++;
    }
    while (j<=size-i+1)
    {
        cout<<"*";
        j++;
    }
    i++;
    cout<<endl;
  }
  
  return 0;
}