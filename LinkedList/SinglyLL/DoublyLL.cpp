#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node*prev;
    node*next;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

     ~node(){
        int value = this->data;
        if (next!=NULL)
        {
            delete next;
            next = NULL;
        }
        
    }
};

void insertathead(node*&head,node*&tail,int data){
    if (head == NULL)
    {
        node*temp = new node(data);
        head = temp;
        tail = temp;
    }
    else{
    
         node*temp = new node(data);
         temp->next = head;
         head->prev = temp;
         head = temp;

    }
}

void insertattail(node*&tail,node*&head,int data){
    if(tail == NULL){
        node*temp = new node(data);
        tail = temp;
        head = temp;
    }
    else{
       node*temp = new node(data);
       tail->next = temp;
       temp->prev = tail;
       tail = temp;
    }
}

void insertatposition(node*&head,node*&tail,int position,int data){

    if(position==1){
        insertathead(head,tail,data);
        return;
    }

    node*temp = head;
    int count = 1;

    while (count<position-1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next==NULL)
    {
        insertattail(tail,head,data); 
        return;
    }
    node*nodetoinsert = new node(data);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;


}

void deletenode(int position,node*head){
    if (position == 1)
    {
        node*temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }
    else{
        node*current = NULL;
        node*prev = NULL;

        int count = 1;
        while (count<position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current;
        
    }
    
}

void print(node*head){
    node*temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    //node*node1 = new node(10);
    node*head = NULL;
    node*tail = NULL;

    //print(head);

    insertathead(head,tail,20);
    print(head);
    insertathead(head,tail,30);
    print(head);
    insertattail(tail,head,40);
    print(head);
    insertatposition(head,tail,3,25) ;
    print(head);
    deletenode(2,head);
    print(head);
    return 0;
}