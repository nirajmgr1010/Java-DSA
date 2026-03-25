#include<stdio.h>
#define Maxsize 10
int stack[Maxsize],top=-1;
void push(){
    int val;
    if(top==Maxsize-1){ //-1 == 9
        printf("Stack is overflow");
    }
    else{
        printf("\nEnter the value to be inserted: ");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        printf("\nBefore pop operation:%d",stack[top]);
        top--;
        printf("\nAfter pop operation:%d",stack[top]);
    }
}
void display(){
     for(int i=top; i>=0; i--){
        printf(" Stack data:%d",stack[i]);
     }
}
int main(){
    int option;
    while(1){
        printf("\nStack Options Menu");
        printf("\n1.push\n2. pop \n.3. display\n4.Exit");
        
        scanf("%d",&option);
        switch (option)
        {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        return 0;
        break;
        default:
        printf("Invalid option");
        break;
        }
    }
    return 0;
}