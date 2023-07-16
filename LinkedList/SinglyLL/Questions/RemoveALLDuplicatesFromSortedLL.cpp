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
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* temp = new ListNode(0);
//         temp->next = head;
//         ListNode* curr = temp;
//         int duplicate;

//         while(curr != NULL && curr->next != NULL){
//             if(curr->next->next != NULL && curr->next->val == curr->next->next->val){
//                 duplicate = curr->next->val;

//                 while(curr->next != NULL && curr->next->val == duplicate){
//                     curr->next = curr->next->next;
//                 }
//             }
//             else{
//                 curr = curr->next;
//             }
//         }
//         return temp->next;
//     }
// };