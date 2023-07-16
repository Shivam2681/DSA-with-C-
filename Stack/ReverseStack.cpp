#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int> &stack,int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    insertAtbottom(stack,element);
    stack.push(num);
    
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    
    insertAtbottom(stack,num);
    
}

int main(){
    
    return 0;
}