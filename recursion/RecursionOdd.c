#include<stdio.h>
void PrintOdd(int n){
     int count = 0;
    int num = 1;

    while (count < n)
    {
        if(num%2!=0){
           printf("%d \t",num);
            count++;
        }
        num++;
    }

    printf("\n%d\n",count);
}

void PrintOddRec(int count , int n , int num){
    if(count == n){
        return;
    }

    if(num%2!=0){
        printf("%d \t",num);
        PrintOddRec(count+1,n,num-1);
    }
    else{
        PrintOddRec(count,n,num-1);
    }
}


int main(){
  PrintOdd(5);
  PrintOddRec(0,5,100);
}