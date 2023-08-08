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

void insertatHead(node* &head,int data){
    node*temp = new node(data);
    temp->next = head;
    head = temp;

}

void print(node*&head){
        //if (head == NULL)
        //{
          //  cout<<"list is empty "<<endl;
            //return;
        //}
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

    insertatHead(head,5);
    print(head);

    insertatHead(head,6);
    print(head);
    return 0;
}