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

struct Node * search(struct Node* root, int key){
    if(root==NULL){ // if root is null it reutrns null
        return NULL;
    }
    if(key==root->data){ // if key is equal to root data it return here
        return root;
    }
    else if(key<root->data){ //if key is less than root data it goes on left side to find key
        return search(root->left,key);
    }
    else{
        return search(root->right,key); // if key greater than root data it goes on right side to find key
    }
}

struct Node * searchIter(struct Node* root, int key){

    while (root != NULL)
    {
    if(key == root->data){
        return root;
    }
    else if(key < root->data){
        root = root->left;
    }
    else{
        root = root->right;
    }
}
   return NULL;

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
 
    struct Node* n = search(p,1);
    struct Node* n2 = searchIter(p,1);
    if(n2!=NULL){
  printf("Element found: %d  ", n2->data);
    }
    else{
        printf("Element is not found");
    }
  
    return 0;

}