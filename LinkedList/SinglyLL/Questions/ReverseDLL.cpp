// Node* reverseDLL(Node* head)
// {   
//     Node* curr = head;
//     Node* forward = NULL;
//     Node* prev = NULL;
//     while(curr != NULL){
//         forward = curr->next;
//         curr->next = prev;
//         curr->prev = forward;
//         prev = curr;
//         curr = forward;
//     }  
//     head = prev;
//     return prev;
// }