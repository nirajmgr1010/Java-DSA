#include<stdio.h>

void PrintEven(int n){
    int count = 0;
    int num = 1;

    while (count < n)
    {
        if(num%2==0){
            printf("%d \t", num);
            count++;
        }
        num++;
    }

    printf("\n%d\n",count);
}

void PrintEvenRec(int count, int n,int num){
      if(count == n){
        return;
      }
      if(num%2==0){
        printf("%d \t",num);
        PrintEvenRec(count+1, n, num+1);
      }
      else{
        PrintEvenRec(count,n,num+1);
      }   
}
int main(){
    PrintEven(5);

    PrintEvenRec(0,5,1);
}