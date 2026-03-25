#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
     struct Node *N;
     N = (struct Node*) malloc (sizeof(struct Node));
     N->data = data;
     N->left = NULL;
     N->right = NULL;

     return N;
}


void *inOrder(struct Node* root){
    if(root!=NULL){
     inOrder(root->left);
     printf("%d  ",root->data);
     inOrder(root->right);
    }
}

int main(){

    //Constructing the root Node - Using function (Recommended
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);

    //Finally the tree looks like this:
    /*
             5
            / \
           3   6
          / \ 
         1   4
    */

    //Linking the root node with left and right children
    p-> left = p1;
    p->right = p2;
    p1->left=p3;
    p1->right=p4;

    // preOrder(p);
    // printf("\n");
    // postOrder(p);
    // printf("\n");
    inOrder(p);
    printf("\n");
    printf("%d ",isBST(p));

}