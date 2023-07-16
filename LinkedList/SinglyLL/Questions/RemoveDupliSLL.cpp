#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node*next;
    
    //constructor creation
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        
    }
    
};

Node * uniqueSortedList(Node * head) {
    if(head == NULL){
        return NULL;
    }
    Node*current = head;
    while(current!=NULL){
        if(current->next!=NULL && current->data == current->next->data){
            Node*temp = current->next->next;
            Node*nodetodelete = current->next;
            delete nodetodelete;
            current->next = temp;
        }
        else{
            current = current->next;
        }
    }
    return head;
}


int main(){
    
    return 0;
}