
// #include<vector>
// class Solution{
//   public:
//     //Function to check whether the list is palindrome.
//     bool palindrome(vector<int> &ans){
//         int n = ans.size();
//         int s = 0;
//         int e = n-1;
        
//         while(s<=e){
//             if(ans[s] != ans[e]){
//                 return false;
//             }
//             else{
//                 s++;
//                 e--;
//             }
//         }
//         return true;
//     }
//     bool isPalindrome(Node *head)
//     {
//         vector<int> ans;
        
//         Node* temp = head;
        
//         while(temp != NULL){
//             ans.push_back(temp->data);
//             temp = temp->next;
//         }
        
//         return palindrome(ans);
//     }
// };



// ListNode* getmiddle(ListNode* head){
//     ListNode* slow = head;
//     ListNode* fast = head;
   
//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     return slow;
// }
// ListNode* reverse(ListNode* head){
    
//     ListNode* prev = NULL;
//     ListNode* curr = head;
//     ListNode* next = NULL;

//     while(curr!=NULL){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
//     bool isPalindrome(ListNode* head) {
//         if(head == NULL && head->next == NULL){
//             return true;
//         }
//         ListNode* middle = getmiddle(head);

//         ListNode* temp = middle->next;
//         middle->next = reverse(temp);

//         ListNode* head1 = head;
//         ListNode* head2 = middle->next;

//         while(head2 != NULL){
//             if(head1->val != head2->val){
//                 return false;
//             }
//             else{
//                 head1 = head->next;
//                 head2 = head2->next;
//             }
//         }
//         temp = middle->next;
//         middle->next = reverse(temp);

//         return true;


//     }
// };

