#include <stdio.h>

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
    selection(a,n);
    printf("\n Before Sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    } 
}