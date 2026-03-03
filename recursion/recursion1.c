#include<stdio.h>

void printNumb(int n){
   if(n==6){
    return;
   }
   printf("%d \n",n);
   printNumb(n+1);
}
int main(){
   int n = 1;
   printNumb(n);
}