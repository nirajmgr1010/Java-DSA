#include<stdio.h>

// Binary Search Function (Recursive)
int BinarySearch(int *A, int l, int r, int key){
    int m;

    if(l <= r){
        m = (l + r) / 2;

        if(key == A[m]){
            return m;   // Element found
        }
        else if(key < A[m]){
            return BinarySearch(A, l, m-1, key);  // Search left
        }
        else{
            return BinarySearch(A, m+1, r, key);  // Search right
        }
    }

    return -1;  // Element not found
}

// Main Function
int main(){
    int sortArr[] = {2,3,4,9,17,32,45,66,88};
    int n = 9;
    int key = 32;

    int result = BinarySearch(sortArr, 0, n-1, key);

    if(result == -1){
        printf("Search Unsuccessful");
    }
    else{
        printf("Search Successful and found at location %d", result + 1);
    }

    return 0;
}