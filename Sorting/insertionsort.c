#include<stdio.h>
//Insertion sort
void insertion1(int a[], int n){
    int i,temp,j;
    for(i=0; i<n; i++){
        temp = a[i];
        j=i-1;
        while ((temp<a[j]) && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void main(){
    int a[] = {25,57,48,37,33,92,86,12};
    int i;
    printf("\n Before Sorting :");
    for(i=0; i<8; i++){
        printf("%d ",a[i]);
    }

    insertion1(a,8);
    printf("\n After Sorting: ");
    for(i=0; i<8; i++){
        printf("%d ",a[i]);
    }
}