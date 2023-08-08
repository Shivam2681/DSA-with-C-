// Node *rotate(Node *head, int k) {
//      if(head == NULL || head->next == NULL || k==0){
//           return head;
//      }
//      Node* temp = head;
//      int len = 1;
//      while(temp->next != NULL){
//           len++;
//           temp = temp->next;
//      }
//      temp->next = head;

//      Node* curr = head;
//      Node* prev = NULL;
//      k = k%len;
//      int count = 1;
//      while(count < (len-k) +1){
//           prev = curr;
//           curr = curr->next;
//           count++;
//      }
//      prev->next = NULL;
//      return curr;
// }