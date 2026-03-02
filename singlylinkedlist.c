#include<stdio.h>
#include <stdlib.h>
struct Node{
   int data;
   struct Node *next;
};
struct Node *headptr = NULL, *newnode, *p,*hold;
void Create_singlyLL(int item){
    newnode = (struct Node*)malloc(sizeof (struct Node));
    newnode->next = NULL;
    newnode->data = item;
    if(headptr==NULL){
        headptr = newnode;
    }
    else{
        p = headptr;
        while (p->next != NULL)
        {
           p = p->next;
        }
        p->next = newnode;
    }
}
void traverse(){
    p = headptr;
    while (p != NULL)
    {
        printf("Data is : %d\n",p->data);
         p = p->next;
    }
    
}
void insert_At_First(int item){
        newnode = (struct Node*) malloc (sizeof(struct Node));
        newnode->next = NULL;
        newnode->data = item;
         
        newnode->next = headptr;
        headptr = newnode;
}
void insert_At_End(int item){
     newnode = (struct Node*) malloc (sizeof(struct Node));
     newnode ->next = NULL;
     newnode -> data = item;

     if(headptr == NULL){
        headptr = newnode;
     }
     else{
        p = headptr;
        while (p->next != NULL)
        {
            p = p-> next;
        }
        p->next = newnode;
     }
}
void insert_At_anyPos(int pos, int item){
      newnode = (struct Node*) malloc (sizeof(struct Node));
      newnode -> next = NULL;
      newnode -> data = item;

      if(headptr == NULL){
        headptr = newnode;
      }
      //Insert at first
      if(pos<=1){
        newnode->next = headptr;
        headptr=newnode;
        return;
      }
      p = headptr;
      while (pos<2 && p->next != NULL)
      {
         p = p->next;
         pos = pos-1;
      }
      newnode ->next = p->next;
      p->next =newnode;
}
void Searching_byVal(int val){
      int pos = 1,num;
      p = headptr;
      while (p != NULL)
      {
        if(p->data == val){
            printf("Your data is found: %d\n", p->data);
            printf("Position of node is : %d\n", pos);
            return;
        } 
        p = p->next;
         pos++;
      }
      printf("Value not found in list");
}

void Delete_At_First(){
    p = headptr;
    headptr = headptr ->next;
    free(p);
   printf("Successfully deleted");   
}

void Delete_Node_givenPos(int pos){
      p=headptr;
      for(int i=0; i<pos-1; i++){
        p = p->next;
      }
      hold = p->next;
      p->next = hold ->next;
      free(hold);
}


void Delete_At_End(){
    p=headptr;
    while(p->next != NULL){
        p = p-> next;
    }
   hold = p->next;
   p->next = NULL;
   free(hold);
}
int main(){
      int num;
      int val,pos;
      while(num != 0){
      printf("\n---Main menu---\n");
      printf("1- Create a Sigly linked list\n");
      printf("2- Insert as First Node of SSL\n");
      printf("3- Insert as Last Node of SLL\n");
      printf("4- Insert a new node at Given Pos\n");
      printf("5- Search the Node by val\n");
      printf("---Delete Section---\n");
      printf("6- Delete a First Node of SSL\n");
      printf("7- Delete a node from given position of the SSL\n");
      printf("8- Delete a Last Node of SSL\n");
      printf("9- Display all the Node\n");
      printf("0- Exit\n");
      scanf("%d",&num);
      switch (num)
      {
      case 1:
        printf("Enter the data to insert: \n");
        scanf("%d",&val);
        Create_singlyLL(val);
        break;
      
        case 2:
        printf("Enter the data to insert: \n");
        scanf("%d",&val);
        insert_At_First(val);
        break;

        case 3:
        printf("Enter the data to insert: \n");
        scanf("%d",&val);
        insert_At_End(val);
        break;

        case 4:
        printf("Enter the data to insert: \n");
        scanf("%d",&val);
        printf("Enter the pos to insert a node\n");
        scanf("%d",&pos);
        insert_At_anyPos(pos,val);
        break;
        
        case 5:
       printf("Search the Node By value: ");
       scanf("%d",&val);
       Searching_byVal(val);
        break;
        
        case 6:
        Delete_At_First();
        break;

        case 7:
        printf("Insert the post to delete");
        scanf("%d",&pos);
        Delete_Node_givenPos(pos);
        break;

        case 8:

        break;
        case 9:
        traverse();
        break;
      default:
        break;
      }
    }
}