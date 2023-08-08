// Node * uniqueSortedList(Node * head) {
//     if(head == NULL){
//         return NULL;
//     }
//     Node*current = head;
//     while(current!=NULL){
//         if(current->next!=NULL && current->data == current->next->data){
//             Node*temp = current->next->next;
//             Node*nodetodelete = current->next;
//             delete nodetodelete;
//             current->next = temp;
//         }
//         else{
//             current = current->next;
//         }
//     }
//     return head;
// }