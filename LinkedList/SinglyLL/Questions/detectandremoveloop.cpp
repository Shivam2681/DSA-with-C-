#include<iostream>
#include<map>
using namespace std;

class node{

    public:

    int data;
    node*next;
    
    //constructor creation
    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        
    }
    
};

void insertatTail(node* &tail,int data){
    node*temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertatHead(node* &head,int data){
    node*temp = new node(data);
    temp->next = head;
    head = temp;

}

void insertAtposition(node* &tail,node* &head,int position,int data){

    if(position == 1){
        insertatHead(head,data);
        return;
    }
    node*temp = head;
    int count = 1;
    while (count < position-1)
    {
        temp  = temp->next; 
        count++;
    }

    if(temp->next == NULL){
        insertatTail(tail,data);
        return;
    }
    
    node* nodetoinsert = new node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(int position, node* &head){

    if(position == 1){
        node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node*current = head;
        node*prev = NULL;

        int count =1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        prev->next = current->next;
        current-> next = NULL;
        delete current;
        
    }
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

node*floyddetectloop(node*head){
    if(head == NULL){
        return NULL;
    }
    node*slow = head;
    node*fast = head;
    
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
    
}
node*startingofnode(node*head){
    if(head == NULL){
        return NULL;
    }
    node*intersection = floyddetectloop(head);
    if(intersection == NULL){
        return NULL;
    }
    node*slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void *removeLoop(node *head)
{
    if(head == NULL){
        return;
    }
    node*startingnode = startingofnode(head);
    if(startingnode == NULL){
        return NULL;
    }
    node*temp = startingnode;
    
    while(temp->next!= startingnode){
        temp = temp->next;
    }
    temp->next = NULL;
}

bool detectloop(node* head){
    if(head == NULL){
        return false;
    }

    node* temp = head;
    map<node*,int> visited;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main(){
    node*node1 = new node(10);
    node*head = node1;
    node*tail = node1;

    insertatTail(tail,9);
    print(head);

    insertatTail(tail,8);
    print(head);

    insertatHead(head,7);
    print(head);

    insertatHead(head,6);
    print(head);

    insertAtposition(tail,head,3,9);
    print(head);

    deletenode(6,head);
    print(head);
    return 0;
}