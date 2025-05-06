#include <stdio.h>
#include <stdlib.h>
struct node {
  int key;
  struct node *left, *right;
};

// Creation
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal using recursion
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);
    // Traverse root
    printf("%d ", root->key);
    // Traverse right
    inorder(root->right);
  }
}

void preorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
     printf("%d ", root->key);
    preorder(root->left);
    // Traverse right
    preorder(root->right);
  }
}
