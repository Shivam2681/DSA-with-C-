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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int len = getlength(head);
//         if(head->next == NULL && head->val == n){
//            return NULL;
//         }
//         if(len == n){
//            return head->next;
//         }
//         ListNode*current = head;
//         ListNode*prev = NULL;
//         int count = 1;
//         while (count < (len - n) +1)
//        {
//             prev = current;
//             current = current->next;
//             count++;
//         }
//         prev->next = current->next;
//         current-> next = NULL;
//         delete current;
//         return head;
//     }
// };