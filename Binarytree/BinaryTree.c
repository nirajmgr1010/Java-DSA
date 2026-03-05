#include<stdio.h>
#include<malloc.h>


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


struct node* createNode(int data){
    struct Node *N;  //creating a node pointer
    N = (struct Node*) malloc(sizeof(struct Node));// Allocating memory in the heap
    N->data = data; //setting the data
    N->left = NULL; //setting the left and right children to null
    N->right = NULL; //setting the left and right children to null

    return N; //Finally returning the created Node
}

int main(){

    /*
   //Constructing the root node
    struct Node *p;
    p = (struct Node*) malloc(sizeof(struct Node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

   //Constructing the second node
    struct Node *p1;
    p1 = (struct Node*) malloc(sizeof(struct Node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

   //Constructing the third node
    struct Node *p2;
    p2 = (struct Node*) malloc(sizeof(struct Node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    //linking the root node with left and right children
    p->left = p1;
    p->right = p2;
      */
  
      //Constructing the root node - Using function()
      struct Node *p = createNode(2);
      struct Node *p1 = createNode(1);
      struct Node *p2 = createNode(4);

      //Linking the root node with left and right children
      p->left = p1;
      p->right = p2;

}