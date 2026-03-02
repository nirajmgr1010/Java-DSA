#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node *NodeType;
NodeType first = NULL, last = NULL;
void insert_at_first(){
      NodeType newNode;
      newNode = (NodeType*) malloc (sizeof(NodeType));
      int value;
      printf("Enter a value: ");
      scanf("%d",&value);
      newNode->data = value;
      newNode->next = NULL;
      newNode->prev = NULL;
      if(first==NULL){
        first=last=newNode;
      }
      else{
        newNode->next = first;
        first->prev=newNode;
        first=newNode;
      }
}

void insert_at_last(){
       NodeType newNode;
       newNode = (NodeType*) malloc (sizeof(NodeType));
       int value;
       printf("Enteer a value: ");
       scanf("%d",&value);
       newNode->data = value;
       newNode->next = NULL;
       newNode->prev = NULL;
       if(first == NULL){
        first = newNode;
       }
       else{
        while(first->next != NULL){
            first = first->next;
        }
        first->next = newNode;
        newNode->prev = first;
       }

}
void insert_at_anypos(){
    NodeType newNode;
       newNode = (NodeType*) malloc (sizeof(NodeType));
       int value,pos;
       printf("Enteer a value: ");
       scanf("%d",&value);
       printf("enter any pos to insert: ");
       scanf("%d",&pos);
       newNode->data = value;
       newNode->next = NULL;
       newNode->prev = NULL;
       if(first==NULL){
        first = newNode;
       }
       if(pos<=1){
           newNode->next = first;
           first->prev = newNode;
           first = newNode;
           return;
       }
       while (pos< 2&& first->next != NULL)
       {
          first = first->next;
          pos = pos-1;
       }
       newNode->next = first;
       first->next->prev = newNode;
       first->next = newNode;
}
void delete_at_first(){
       NodeType temp = first;
       if(first==NULL){
        printf("The list is empty");
       }
       temp = first;
       first = first->next;
       first->prev = NULL;
       free(temp);
}
void delet_at_last(){
    NodeType temp = first;
    while(first->next != NULL)
    {
        first = first->next;
    }
    temp = first;
    first->prev->next = NULL;
    free(temp);
}   
void delete_at_anypos(){
    NodeType temp;
    temp = (NodeType*) malloc (sizeof(NodeType));
    int pos;
   printf("enter any pos to insert: ");
    scanf("%d",&pos);
    if(){

    }
}