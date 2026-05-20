#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node *Headptr = null, *temp, *newNode, *p;
void createLL(int item){
    newNode = (struct Node*) malloc (sizeof(struct Node));
    newNode -> data = item;
    newNode -> next = NULL;
    if(Headptr == NULL){
        Headptr = newNode;
    }
    p = Headptr;
    while(p-> next != NULL){
        p = p->next;
    }
   p->next = newNode;
}

void insertAtFirst(int item){
    newNode = (struct Node*) malloc (sizeof(struct Node));
    newNode ->data = item;
    newNode ->next = null;
    if(Headptr == NULL){
        Headptr = newNode;
    }
    newNode->next = Headptr;
    Headptr = newNode;
}

void insertAtLast(int item){
    newNode = (struct Node*) malloc (sizeof(struct Node));
    newNode ->data = item;
    newNode -> next = NULL;
    if(Headptr == NULL){
        Headptr = newNode;
    }
     p = Headptr;
     while(p->next != NULL){
        p = p->next;
     }
     p->next = newNode;
}
void insertAtPos(int item, int pos){
    newNode = (struct Node*) malloc (sizeof(struct Node));
    newNode -> data = item;
    newNode -> next = NULL;
    if(Headptr == NULL){
        Headptr = newNode;
    }
    p = Headptr;
    while(pos>2 && p != NULL){
        p = p->next;
        pos--;
    }
        if (p == NULL) {
        printf("Invalid position\n");
        return;
    }
    newNode->next = p->next;
    p->next = newNode;
}

void DelAtFirst(){
    temp = Headptr;
    Headptr = Headptr -> next;
    free(temp);
    printf("Successfully Deleted");
}

void DelAtLast(){
    p = Headptr;
    while(p->next != NULL){
        p = p->next;
    }
    temp = p->next;
    p->next = NULL;
    free(temp);
}
int main(){

}