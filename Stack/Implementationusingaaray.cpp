#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
    
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element){
    if(size-top > 1){
         top++;
         arr[top] = element;
    }
    else{
        cout<<" stack overflow ";
    }
}

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<< " stack underflow ";
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<" stack is empty ";
        }
    }

    bool isempty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    
};



int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.peek()<<endl;

    s.pop();

    cout<<s.peek();

    
    return 0;
}