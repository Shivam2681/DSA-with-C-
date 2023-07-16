// #include<iostream>
// using namespace std;

// class node{

//     public:
//     int data;
//     node*next;

//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

    

// };
// // Using recursion
// /*void reverse(Node*&head,Node*current,Node*prev){
//     //base case
//     if(current == NULL){
//         head = prev;
//         return;
//     }
//     Node*forward = current->next;
//     reverse(head,forward,current);
//     current->next = prev;
// }
// Node* reverseLinkedList(Node *head)
// {
//     Node* current = head;
//     Node* prev = NULL;
//     reverse(head,current,prev);
//     return head;
    
//     /* if(head == NULL || head->next == NULL){
//         return head;
//     }
    
//     Node*prev = NULL;
    
//     Node*current = head;
//     Node*forward = NULL;
    
//     while(current!=NULL){
//         forward = current->next;
//         current->next = prev;
//         prev = current;
//         current = forward;
//     }
//     return prev;
//     */
// }**/



// int reverseLinkedList(node*&head)
// {
//      if(head == NULL || head->next == NULL){
//         return head;
//     }
    
//     node*prev = NULL;
    
//     node*current = head;
//     node*forward = NULL;
    
//     while(current!=NULL){
//         forward = current->next;
//         current->next = prev;
//         prev = current;
//         current = forward;
//     }
//     return prev;
// }
// void print(node* &head){
//         if (head == NULL)
//         {
//             cout<<"list is empty "<<endl;
//             return;
//         }
//         node*temp = head;
        
//         while (temp!=NULL)
//         {
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
        
        
//     }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
// ListNode* reverse(ListNode* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
//     ListNode* temp = reverse(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return temp;
// }
//     ListNode* reverseList(ListNode* head) {
//        return reverse(head);
//     }
// };




// int main(){
//     node* node1 = new node(10);
//     node*head = node1;
//     print(head);
//     return 0;
// }