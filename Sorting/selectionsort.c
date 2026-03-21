#include <stdio.h>


void printArray(int* A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
   printf("Running Selection sor....\n");
   int indexofMin,temp;
   for(int i=0; i<n-1; i++){
       indexofMin = i;
       for (int j = i+1; i < n; j++)
       {
        if(A[j] < A[indexofMin]){
            indexofMin = j;
        }
       }

       //Swap A[i] and A[indexOfMin]
       temp = A[i];
       A[i] = A[indexofMin];
       A[indexofMin] = temp;
       
   }
}

void selection(int a[], int n){
    int i,j,temp,pos,least;
    for(i=0; i<n; i++){
        least = a[i];
        pos=i;
        for(j=i+1; j<n; j++){
            if(a[j]<least){
                least = a[j];
                pos=j;
            }
        }
        if(i!=pos){
            temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }
}
void main(){
    int a[100],n,i;
    printf("Enter number of items: ");
    scanf("%d",&n);
    printf("Enter %d data to be sort",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n Before Sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printArray(a,n);
    selectionSort(a,n);
    printArray(a,n);
    // selection(a,n);
    // printf("\n Before Sorting: ");
    // for(i=0; i<n; i++){
    //     printf("%d ",a[i]);
    // } 
}