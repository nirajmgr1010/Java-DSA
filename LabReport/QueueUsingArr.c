#include <stdio.h>
#include <stdlib.h>
#define MaxSize 5
struct LinearQueue
{
    int Item[MaxSize];
    int front;
    int rear;
   
}; typedef struct LinearQueue LQ;
void Enqueue(LQ *q){
    int val;
    if(q->rear==MaxSize-1){
        printf("Queue Overflow\n");
    }else{
        printf("Enter value to be inserted:");
        scanf("%d",&val);
        q->rear++;
        q->Item[q->rear]=val;
    }   
}
void Dequeue(LQ *q){
   if(q->rear<q->front){
       printf("Queue is Empty\n ");
   }else{
       printf("Deleted element is %d\n",q->Item[q->front]);
       if(q->front>MaxSize-1){
        q->front=0;
       }
       q->front++;
       printf("after deletion front=%d rear=%d\n",q->Item[q->front]);
   }
}

void Display(LQ *q){
    if(q->rear<q->front){
        printf("Queue is empty");
    }else{
        printf("Queue element are:");
        for(int i=q->front;i<=q->rear;i++){
            printf("%d",q->Item[i]);
        }
    }
}

int main(){
    LQ *q;
    q->front=0;
    q->rear=-1;
    int choice;
    printf("Queue menu:\n");
    while (1)
    {
        printf("\n1.Enqueue \n2.Dequeue \n3.Display\n4.Exit");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: Enqueue(q);break;
        case 2:Dequeue(q); break;
        case 3:Display(q); break;
        case 4:exit(1);break;
        default:
            printf("\nInvalid choice.");
            break;
        }
    }
    
    return 0;
}