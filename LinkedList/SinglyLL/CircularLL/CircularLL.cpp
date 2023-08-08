#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int type = this->data;
        if(next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertnode(node*&tail,int element,int data){

    if(tail == NULL){
        node*newnode = new node(data);
        tail = newnode;
        newnode->next = newnode;
        
    }
    else{
        node*current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        node*temp = new node(data);
        temp->next = current->next;
        current->next = temp;

    }
}

void deletenode(node*&tail,int value){
    if(tail == NULL){
        cout<<"empty list";
    }
    else{
        node*prev = tail;
        node*current = prev->next;

        while (current->data!=value)
        {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        if(tail == current){
            tail = prev;
        }
        current->next = NULL;
        delete current;
        
    }
}

void print(node*tail){
    node*temp = tail;

    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail!=temp);
    cout << endl;
    
}

int main(){
    node*tail = NULL;
    

    insertnode(tail,5,3);
    print(tail);

    insertnode(tail,3,5);
    print(tail);
    insertnode(tail,5,7);
    print(tail);
    insertnode(tail,7,9);
    print(tail);
    deletenode(tail,7);
    print(tail);

    return 0;
}