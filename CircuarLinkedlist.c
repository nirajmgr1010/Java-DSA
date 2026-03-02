#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *Headptr=NULL, *newnode,*p,*temp;
void creat_List(int item){
     newnode = (struct Node*) malloc(sizeof(struct Node));
     newnode->data = item;
     newnode->next = NULL;
     if(Headptr==NULL){
        Headptr = newnode;
        Headptr->next = Headptr;
     }
     else{
        p = Headptr;
        while (p->next != Headptr)
        {
           p = p->next;
        }
        p->next= newnode;
        newnode->next = Headptr;
     }
}
void insert_At_First(int item){
     newnode = (struct Node*) malloc(sizeof(struct Node));
     newnode->data = item;
     newnode->next = NULL;
     if(Headptr==NULL){
        Headptr = newnode;
        Headptr->next = Headptr;
     }
     else{
        p=Headptr;
        while (p->next != Headptr)
        {
            p = p->next;
        }
        newnode->next = Headptr;
        Headptr = newnode;
        p->next = Headptr;
     }
}
void insert_At_End(int item){
    newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = item;
    newnode->next = NULL;
    if(Headptr==NULL){
        Headptr = newnode;
        Headptr->next = Headptr;
    }
    else{
      p = Headptr;
      while (p->next != Headptr)
      {
        p = p->next;
      }
      p->next = newnode;
      newnode->next = Headptr;
    }
}
void insert_At_Anypos(int pos,int item){
     newnode = (struct Node*) malloc (sizeof(struct Node));
     newnode->data = item;
     newnode->next = NULL;

     if(Headptr==NULL){
        Headptr = newnode;
        Headptr->next = Headptr;
     }
     //Insert at first position
     if(pos<=1){
        p = Headptr;
        while (p->next != Headptr)
        {
            p = p->next;
        }
        newnode->next = Headptr;
        Headptr=newnode;
        p->next = Headptr;
     }
     p=Headptr;
     while (pos>2 && p->next!=Headptr)
     {
       p = p->next;
       pos--;
     }
     if(p->next==Headptr){
        p->next = newnode;
        newnode->next=Headptr;
     }
     else{
        newnode->next=p->next;
        p->next=newnode;
     }
}
void traverse(){
    if(Headptr==NULL){
        return;
    }
   p = Headptr;
    do {
        printf("Your data is : %d\n", p->data);
        p = p->next;
    } while (p != Headptr);
}
int main(){
      creat_List(10);
      creat_List(20);
      insert_At_First(2);
      insert_At_End(5);
      insert_At_Anypos(21,10);
      traverse();
}