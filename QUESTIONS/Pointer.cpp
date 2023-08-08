#include<iostream>
using namespace std;

int main(){
    
   //float f = 10.5;
  //float p = 2.5;
  //float* ptr = &f;
  //(*ptr)++;
   //*ptr = p;
  //cout << *ptr << f << p;

    //int *ptr = 0;
    //int a = 10;
    //*ptr = a;
//
    //cout << *ptr << endl;

   // int arr[] = {4, 5, 6, 7};
   // int *p = (arr + 1);
   // cout << *arr;

   //char s[]= "hello";
   //char *p = s;
   //cout << s[0] << " " << p[0];

   char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
    
    
    return 0;
}