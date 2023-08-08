// class Solution {
// public:
// void insertAtTail(Node* &head, Node* &tail, int d){
//     Node* newnode = new Node(d);
//     if(head == NULL){
//         head = newnode;
//         tail = newnode;
//     }
//     else{
//         tail->next = newnode;
//         tail = newnode;
//     }
// }
//     Node* copyRandomList(Node* head) {
//         Node* CloneHead = NULL;
//         Node* CloneTail = NULL;

//         Node* temp = head;
//         while(temp != NULL){
//             insertAtTail(CloneHead,CloneTail,temp->val);
//             temp = temp->next;
//         }

//         unordered_map<Node*,Node*> OldToNew;

//         Node* OriginalNode = head;
//         Node* CloneNode = CloneHead;

//         while(OriginalNode != NULL){
//             OldToNew[OriginalNode] = CloneNode;
//             OriginalNode = OriginalNode->next;
//             CloneNode = CloneNode->next;
//         }
//         OriginalNode = head;
//         CloneNode = CloneHead;

//         while(OriginalNode != NULL){
//             CloneNode->random = OldToNew[OriginalNode->random];
//             OriginalNode = OriginalNode->next;
//             CloneNode = CloneNode->next;
//         }
//         return CloneHead;
//     }
// };



/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *random;
 *		Node() : data(0), next(nullptr), random(nullptr){};
 *		Node(int x) : data(x), next(nullptr), random(nullptr) {}
 *		Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
 * };
 */
// void insertAtTail(Node* &head, Node* &tail, int d){
//     Node* newnode = new Node(d);
//     if(head == NULL){
//         head = newnode;
//         tail = newnode;
//     }
//     else{
//         tail->next = newnode;
//         tail = newnode;
//     }
// }
// Node *cloneLL(Node *head){
// 	Node* CloneHead = NULL;
//     Node* CloneTail = NULL;
//     Node* temp = head;
//     while(temp != NULL){
//         insertAtTail(CloneHead,CloneTail,temp->data);
//         temp = temp->next;
//     }
//     Node* OriginalNode = head;
//     Node* CloneNode = CloneHead;

//     while(OriginalNode != NULL && CloneNode != NULL){
//         Node* next = OriginalNode->next;
//         OriginalNode->next = CloneNode;
//         OriginalNode = next;

//         next = CloneNode->next;
//         CloneNode->next = OriginalNode;
//         CloneNode = next;
//     }

//     temp = head;

//     while(temp != NULL){
//         if(temp->next != NULL){
//             temp->next->random = (temp->random != NULL) ? temp->random->next: temp->random;
//         }
//         temp = temp->next->next;
//     }

//     OriginalNode = head;
//     CloneNode = CloneHead;

//     while(OriginalNode != NULL && CloneNode != NULL){
//         OriginalNode->next = CloneNode->next;
//         OriginalNode = OriginalNode->next;

//         if(OriginalNode != NULL){
//             CloneNode->next = OriginalNode->next;
//         }
//         CloneNode = CloneNode->next;
//     }
//     return CloneHead;
// }