#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node *Headptr = NULL, *p, *temp, *newnode;
void create_list(int item){
    newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = item;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(Headptr==NULL){
        Headptr = newnode;
    }
    else{
        p=Headptr;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newnode;
        newnode->prev=p;
    }
}
void FrontTraverse(){
    p = Headptr;
    while(p!=NULL){
       printf("Data is : %d \n",p->data);
       p = p->next;
    }
}

void BackTraverse(){
   if (Headptr == NULL) {
        printf("List is empty\n");
        return;
    }

    // Step 1: Go to last node
    p = Headptr;
    while (p->next != NULL) {
        p = p->next;
    }

    // Step 2: Traverse backward
    while (p != NULL) {
        printf("Data is : %d \n", p->data);
        p = p->prev;
    }
}

void insert_At_First(int item){
     newnode = (struct Node*) malloc (sizeof(struct Node));
     newnode->data = item;
     newnode->next = NULL;
     newnode->prev = NULL;

     if(Headptr==NULL){
        Headptr = newnode;
     }
     else{
        newnode->next = Headptr;
        Headptr->prev=newnode;
        Headptr = newnode;
     }
}

void insert_At_End(int item){
    newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = item;
    newnode->next = NULL;
    newnode->prev = NULL;
    p=Headptr;
    if(p==NULL){
      Headptr = newnode;
    }
    else{
        while (p->next != NULL)
        {
          p = p->next;
        }
        p->next = newnode;
        newnode->prev = p;
    }
}

void insert_At_Anypos(int pos,int item){
     newnode = (struct Node*) malloc (sizeof(struct Node));
     newnode->data = item;
     newnode->next = NULL;
     newnode->prev = NULL;
     if(pos<=1){
        newnode->next = Headptr;
        Headptr->prev = newnode;
        Headptr = newnode;
        return;
    }
    p = Headptr;
    while(pos>2 && p->next != NULL){
        p = p->next;
        pos = pos-1;
    }
    newnode->next = p;
    p->next->prev = newnode;
    p->next = newnode;
}

// Deletion method
void Delete_At_First(){
    temp = Headptr;
    Headptr = Headptr->next;
    Headptr->prev = NULL;
    free(temp);
}

void Delete_At_Last(){
    p = Headptr;
    while(p->next != NULL){
        p = p->next;
    }
    temp = p;
    p->prev->next = NULL;
    free(temp);
}

void Delete_At_Givenpos(int pos){
    p=Headptr;
    if(Headptr == NULL){
        printf("List is empty");
        return;
    }

    //Delete First Node
    if(pos <= 1){
        temp = Headptr;
        Headptr = Headptr -> next;
        if(Headptr != NULL){
        Headptr->prev = NULL;
         }
         free(temp);
         return;
    }
     for(int i=0; i<pos-1 && p->next != NULL; i++){
        p = p->next;
     }
      // Invalid position
    if (p->next == NULL) {
        printf("Invalid position\n");
        return;
    }

     temp = p->next;
     p->next = temp->next;
      // If not last node
    if (temp->next != NULL) {
        temp->next->prev = p;
    }
     free(temp);
}
int main(){
    int num;
      int val,pos;
      while(num != 0){
      printf("\n---Main menu---\n");
      printf("1- Create a Doubly linked list\n");
      printf("2- Insert as First Node of DLL\n");
      printf("3- Insert as Last Node of DLL\n");
      printf("4- Insert a new node at Given Pos\n");
      printf("5- Search the Node by val\n");
      printf("---Delete Section---\n");
      printf("6- Delete a First Node of DSL\n");
      printf("7- Delete a node from given position of the DSL\n");
      printf("8- Delete a Last Node of DSL\n");
      printf("9- Display all the Node in front way\n");
      printf("10- Display all the Node in Backward way\n");
      printf("0- Exit\n");
      scanf("%d",&num);
      switch (num)
      {
      case 1:
        printf("Enter the data to insert: \n");
        scanf("%d",&val);
       create_list(val);
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
        insert_At_Anypos(pos,val);
        break;
        
    //     case 5:
    //    printf("Search the Node By value: ");
    //    scanf("%d",&val);
    //    Searching_byVal(val);
    //     break;
        
        case 6:
        Delete_At_First();
        break;

        case 7:
        printf("Insert the post to delete");
        scanf("%d",&pos);
        Delete_At_Givenpos(pos);
        break;

        case 8:
        Delete_At_Last();
        break;

        case 9:
        FrontTraverse();
        break;

        case 10:
        BackTraverse();
        break;
      default:
        break;
      }
    }
     
}
