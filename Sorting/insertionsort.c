#include<stdio.h>
void printArray(int* A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key,j;
     for(int i=1; i<= n-1; i++){

         key = A[i]; //12 23
         j = i-1;  //7 65
          //Loop for each pass
          while ((A[j] > key) && j>=0)// 7 > 12 (false)  65 > 23
          {
            A[j+1] = A[j]; // 23 <=> 65 swap
            j--; 
          }
          A[j+1] = key;
     }
}

void main(){
    // int i;
    // printf("\n Before Sorting :");
    // for(i=0; i<8; i++){
    //     printf("%d ",a[i]);
    // }

    // insertion1(a,8);
    // printf("\n After Sorting: ");
    // for(i=0; i<8; i++){
    //     printf("%d ",a[i]);
    // }

    // 0  1   2   3   4   5
    // 7, 12, 54, 65, 23, 9
    int a[] = {7,12,54,65,23,9};
    printArray(a,8);
    insertionSort(a,8);
}