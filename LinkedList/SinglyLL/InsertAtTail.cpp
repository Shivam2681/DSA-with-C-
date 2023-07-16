#include<iostream>
using namespace std;

class node{

    public:

    int data;
    node*next;
    
    //constructor cration
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};

void insertatTail(node* &tail,int data){
    node*temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void print(node* &head){
        if (head == NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
        node*temp = head;
        
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
        
    }


int main(){
    
    node*node1 = new node(10);
    node*head = node1;
    node*tail = node1;

    insertatTail(tail,5);
    print(head);

    insertatTail(tail,6);
    print(head);
    return 0;
}