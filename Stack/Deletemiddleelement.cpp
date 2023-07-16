#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&Stack,int count,int size){
    if(count == size/2){
        Stack.pop();
        return;
    }
    
    int num = Stack.top();
    Stack.pop();
    
    solve(Stack,count+1,size);
    Stack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;
   solve(inputStack,count,N);
   
}

int main(){
    
    return 0;
}