#include<stdio.h>
#include<stdlib.h>
struct  Node
{
   int data;
   struct Node *next;
};

void linkedListTraversal(struct Node* ptr){ //it points to struct node
    while (ptr != NULL)
    {  
    printf("Element : %d\n",ptr->data);
      ptr = ptr->next;
    }
}
struct Node * insertAtFirst(struct Node *head,int data){
   struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr ->next = head;
   ptr ->data = data;
   head = ptr;
   return head;
}

struct Node *insertAtIndex(struct Node *head,int data,int index){//Inset at Between Case 2
       struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
       struct Node *p= head;
       int i=0; 
       while (i!=index-1)
       {
        p = p->next;
        i++;
       }
       ptr->data = data;
       ptr->next = p->next;
       p->next = ptr;
       head = ptr;
       return head;
}

struct Node * insertAtEnd(struct Node *head,int data){
   struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = data;
   struct Node *p = head;

   while (p->next!=NULL)
   {
      p = p->next;
   }
   p->next = ptr;
   ptr->next = NULL;
   return head;
}

//Case 1
struct Node* deleteFirst(struct Node * head){
     struct Node* ptr = head;
     head = head->next;
     free(ptr);
     return head;
}

//case 2"deleting the element at a given index from the linked list
struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* p = head;
    struct Node* q = head->next;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

//case 3 : Deleting the last element
struct Node* deleteAtEnd(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next != NULL)
    {
       p = p->next;
       q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}


int main(){
   struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));

     head -> data = 7;
     head ->next = second;

     //Link second and third nodes
     second->data = 11;
     second->next = third;

     //Terminate the list at the third node
     third->data = 66;
     third->next = NULL;
   

     printf("Linked list before Deletion\n"); 
     linkedListTraversal(head);
     
    head = deleteAtEnd( head);  //for deletion at End
     printf("Linked list After insertion\n"); 
    linkedListTraversal(head);

}