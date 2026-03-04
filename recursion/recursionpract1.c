/*
Qs. Print 1 to N
*/
#include<stdio.h>
void printNum(int n, int i){
    if(i == n+1){
        return;
    }
    printf("%d \t",i);
    printNum(n,i+1);
}

/*
Print N to 1
*/

void printReverseNum(int n){
   
    if(n == 1){
        return;
    }

    printf("%d \t",n);
    printReverseNum(n-1);
}
int main(){
    int i=1, n =100;
    // printNum(n,i);

    printReverseNum(6);
}