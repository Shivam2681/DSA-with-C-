// Node *reverse(Node *head)
// {

//     Node *prevNode = 0;
//     Node *currentNode = head;
//     Node *nextNode = head;
//     while(nextNode!=0)
//     {
//         nextNode = nextNode->next;
//         currentNode->next = prevNode;
//         prevNode = currentNode;
//         currentNode = nextNode;
//     }
//     head = prevNode;
//     return head;
// }
// Node *addOne(Node *head)
// {
//     head= reverse(head);
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         if(curr->data<9)
//         {
//             curr->data+=1;
//             break;
//         }
//         else if(curr->data==9)
//         {
//            if(curr->next!=NULL)
//            {
//                 curr->data=0;
//                 curr=curr->next;
//            }
//            else
//            {
//                 curr->data=1;
//                 Node* newNode=new Node(0);
//                 newNode->next=head;
//                 head=newNode;
//                 break;
//            }
//        }
//     } 
//     return reverse(head);
// }
