#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
typedef struct Node NodeType;
NodeType *first = NULL;
NodeType *last = NULL;
void insertFirst(int el){
    NodeType *Newnode;
    Newnode = (NodeType*)malloc(sizeof(NodeType));
    Newnode->data = el;
    Newnode->prev = Newnode->next = NULL;
    if(first == NULL){
        first = Newnode;
        last = Newnode;
    }
    else{
        Newnode -> next = first;
        first -> prev = Newnode;
        first = Newnode;
    }
}
void insertEnd(int el){
      NodeType * Newnode;
      Newnode = (NodeType*)malloc(sizeof(NodeType));
      Newnode->data = el;
      Newnode->prev = Newnode->next=NULL;
      if(first == NULL){
        first = Newnode;
        last = Newnode;
      }else{
        last -> next = Newnode;
        Newnode-> prev = last;
        last = Newnode;
      }
}
void DeleteFirst(){
    NodeType *temp;
    temp = first;
    if(first == NULL){
        printf("Empty linked list");
    }
    else if(first == last){
         first = NULL;
         last = NULL;
         free(temp);
    }
    else{
        first = first -> next;
        first->prev = NULL;
        free(temp);
    }
}
void DeleteLast(){
     NodeType *temp, *hold;
     temp = first;
     if(last == NULL){
        printf("Empty linked list");
     }
     else if(first == last){
        first = NULL;
        last = NULL;
        free(temp);
     }
     else{
        temp = first;
        while(temp->next != last){
            temp = temp->next;
        }
        hold = temp -> next;
        temp->next = NULL;
        last = temp;
        free(hold);
     }
}
void Display(){
    NodeType *temp;
    temp = first;
    if(first == NULL){
        printf("Empty linked list");
    }else{
        while (temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main(){
  insertFirst(10);
  insertEnd(30);
  insertFirst(5);
  printf("Display the insertion : \n");
  Display();

  printf("\n Delete at first \n");
  DeleteFirst();
  Display();

  printf("\n Delete at Last \n");
  DeleteLast();
  Display();
}
