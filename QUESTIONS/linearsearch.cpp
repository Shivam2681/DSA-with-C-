#include<iostream>
using namespace std;

bool  linearsearch(int array[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (array[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int array[6]={3,5,1,7,8,9};
    int key;
    cout<<"enter your element to search:";
    cin>>key;

    int found = linearsearch(array,6,key);

    if (found)
    {
       cout<<"key is present";    
    }
    else{
        cout<<"key is not present";
    }
    
    


    return 0;
}