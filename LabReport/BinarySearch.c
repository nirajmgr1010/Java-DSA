#include<stdio.h>
/*
3.Binary Search
- Implement Binary Search using a sorted array and trace the steps
*/
int BinarySearch(int *A,int l,int r,int key){
    int m;
    int flag = 0;
    if(l<=r){
       m = (l+r)/2;
       if(key==A[m]){
        flag = m;
       }else if(key<A[m]){
        return BinarySearch(A,l,m-1,key);
       }
       else{
        return BinarySearch(A,m+1,r,key);
       }
    }
}
void main(){
        int sortArr[] = {2,3,4,9,17,32,45,66,88};
        int n = 9;
        int key = 32;
        int flag = BinarySearch(sortArr,0,n-1,key);
        if(flag == 0){
            printf("Search Un-Successful");
        }
        else{
            printf("Search successful and found at location %d",flag+1);
        }
}