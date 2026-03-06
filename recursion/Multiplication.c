#include<stdio.h>

void printMult(int n,int i){
    if(i >10 ){
        return;
    }

    printf("%d \t",n*i);
    printMult(n,i+1);
}
int main(){
    printMult(5,1);
}