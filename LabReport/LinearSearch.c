#include<stdio.h>
void LinearSearch(int *A, int key,int n){
    
   for(int i=0; i<n-1; i++){
    if(A[i] == key){
        printf("Element is Found in position %d",i);
    }
    }
}

void main(){
   int arr[] = {2,3,4,5,6,7,8,9};
   int n = 8;
   int key = 4;
   LinearSearch(arr, key,n);  
}