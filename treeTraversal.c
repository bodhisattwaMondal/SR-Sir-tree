/*
Tree:-
    N
  /   \
 L     R

Traversal:- 
In-order: L->N->R
Pre-order: N->L->R
Post-order: L->R->N
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *left;
    int element;
    struct Node *right;
}Node;

void inorderTraversal(Node *);
void preorderTraversal(Node *);
void postorderTraversal(Node *);

// Driver Code 
int main()
{
    // // Creating tree's Root node
    // Node *root = (Node *)malloc(sizeof(Node));

    // // Inserting values into the tree level wise :

    // // level - 0 
    // root->element = 10;

    // // level - 1
    // root->left->element = 20;
    // root->right->element = 30;

    // // level - 2 
    // root->left->left = NULL;
    // root->left->right->element = 40;

    // root->right->left->element = 50;
    // root->right->left->left = NULL;
    // root->right->left->right = NULL;

    // root->right->right->element = 60;
    // root->right->right->left = NULL;
    // root->right->right->right = NULL;

    // level 0 
    Node *root = (Node *)malloc(sizeof(Node));
    root->element = 10;

    // level 1 
    Node *l = (Node *)malloc(sizeof(Node));
    root->left = l;
    l->element = 20;
    l->left = NULL;
    l->right = NULL;

    Node *r = (Node *)malloc(sizeof(Node));
    root->right = r;
    r->element = 30;
    r->left = NULL;
    r->right = NULL;

    // Traversal Algorithm 
    printf("In-order Traversal: ");
    inorderTraversal(root);

    printf("\nPre-order Traversal: ");
    preorderTraversal(root);

    printf("\nPost-order Traversal: ");
    postorderTraversal(root);
    
    printf("\n");

    return 0;
}

void inorderTraversal(Node *node){
    if (node == NULL)
        return;
    inorderTraversal(node->left);
    printf("%d ", node->element);
    inorderTraversal(node->right);
}

void preorderTraversal(Node *node){
    if (node == NULL)
        return;
    printf("%d ", node->element);
    inorderTraversal(node->left);
    inorderTraversal(node->right);
}

void postorderTraversal(Node *node){
    if (node == NULL)
        return;
    inorderTraversal(node->left);
    inorderTraversal(node->right);
    printf("%d ", node->element);
}