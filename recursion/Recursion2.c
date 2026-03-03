/*
Qs. Print the sum of first n natural numbers
*/

#include<stdio.h>

void printSum(int i, int n, int sum){
    if(i == n){
       sum += i;
       printf("%d \n",sum);
       return;
    }
    sum += i;
    printSum(i+1, n , sum);
    printf("%d \n",i);
}
int main(){
    printSum(1, 5, 0);
}