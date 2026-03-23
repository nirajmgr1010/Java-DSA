#include<stdio.h>

void linearSerch(int *A, int n, int key){
        int flag = 0;
        for(int i=0; i<n-1; i++){
            if(A[i] == key){
                flag = 1;
            }
        }
        if(flag){
            printf("Element is Found Successfully");
        }
        else{
            printf("Element is not found");
        }
}
int main(){
   int a[] = {2,3,4,5,3,5};
   int n = 6;
   linearSerch(a,n,2);
//    linearSerch(a,n,7);
}