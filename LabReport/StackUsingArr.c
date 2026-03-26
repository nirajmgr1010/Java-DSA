#include<stdio.h>
#define Maxsize 10

int stack[Maxsize], top = -1;

void push(){
    int val;
    if(top == Maxsize - 1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter the value to be inserted: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements:\n");
        for(int i = top; i >= 0; i--){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int option;

    while(1){
        printf("\nStack Options Menu");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch(option){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid option\n");
        }
    }
}