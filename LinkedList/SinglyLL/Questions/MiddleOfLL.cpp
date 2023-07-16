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
    // int getlength(ListNode* head){
    //     int len = 0;

    //     while(head != NULL){
    //         len++;
    //         head = head->next;
    //     }
    //     return len;
    // }

//     ListNode* middleNode(ListNode* head) {
//         int len = getlength(head);
//         int ans = len/2;

//         int count=0;

//         while(count<ans){
//             head = head->next;
//             count++;
//         }
//         return head;
//     }
// };

// class Solution{
//     public:
    
//     int middleofLL(Node*head){
//         if(head == NULL || head -> next == NULL){
//             return head->data;
//         }
        
//         Node* slow = head;
//         Node* fast = head->next;
        
//         while(fast != NULL){
//             fast = fast->next;
//             if(fast != NULL){
//                 fast = fast->next;
//             }
//             slow = slow->next;
//         }
//         return slow->data;
//     }
//     int getMiddle(Node *head)
//     {
//         return middleofLL(head);
//     }
// };