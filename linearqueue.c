#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int main(){
    struct queue q;
    q.size = 10;
    q.front = q.rear = -1;
    q.arr = (int*) malloc (q.size*sizeof(int));
}
void circularenque(struct queue *q,int val){
      if(q->front==(q->rear+1)%q->size){
        printf("It is overdflow");
        return;
      }
    else{
        if(q->front == 0){
            q->front = q->rear = 0;
        }
        else{
            q->rear = (q->rear+1)%q->size;
            q->arr[q->rear] = val;
        }
    }
}
void circulardeq(struct queue *q){
        
}
void enqueue(struct queue *q,int val){
       if(q->rear==q->size){
        printf("It is full");
        return;
       }
       else{
        q->rear = q->rear +1;
        q->arr[q->rear] = val;
       }
}
void dequeu(struct queue *q){
    int a =-1;
       if(q->rear<q->front){
        printf("It is empty");
        return;
       }
       else{
        q->front++;
        a=q->arr[q->front];
       }
       return a;
}