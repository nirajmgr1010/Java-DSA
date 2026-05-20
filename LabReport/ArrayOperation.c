#include<stdio.h>

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *n, int pos, int value){
    for(int i = *n; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    (*n)++;
}

void delete(int arr[], int *n, int pos){
    for(int i = pos-1; i < *n-1; i++){
        arr[i] = arr[i+1];
    }
    (*n)--;
}

int main(){
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Original Array:\n");
    display(arr, n);

    // Insert value 25 at position 3
    insert(arr, &n, 3, 25);
    printf("After Insertion:\n");
    display(arr, n);

    // Delete element at position 4
    delete(arr, &n, 4);
    printf("After Deletion:\n");
    display(arr, n);

    return 0;
}