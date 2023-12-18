#include <stdio.h>
#include <stdlib.h>

struct tree {
  int data;
  struct tree *left;
  struct tree *right;
};

struct tree *create() {
  int tdata;
  struct tree *ele;
  ele = (struct tree *)malloc(sizeof(struct tree));
  printf("\nEnter the data: ");
  scanf("%d", &tdata);
  if (tdata == -1) return 0;
  ele->data = tdata;

  printf("ENTER THE LEFT CHILD OF %d", tdata);
  ele->left = create();

  printf("ENTER THE RIGHT CHILD OF %d", tdata);
  ele->right = create();

  return ele;
}

void inorder(struct tree *root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d\t", root->data);
  inorder(root->right);
}

void preorder(struct tree *root) {
  if (root == NULL) return;
  printf("%d\t", root->data);
  preorder(root->left);
  preorder(root->right);
}

void postorder(struct tree *root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%d\t", root->data);
}

int main() {
  printf("\nEnter -1 if there is no specific data to be added.");
  int ch;
  struct tree *root = NULL;
  root = create();
  printf("MENU:\n1. Inorder   2. Preorder   3. Postorder   4. Exit");
  while (1) {
    printf("\nEnter choice: ");
    scanf("%d", &ch);

    switch (ch) {
      case 1:
        inorder(root);
        break;
      case 2:
        preorder(root);
        break;
      case 3:
        postorder(root);
        break;
      case 4:
        printf("TERMINATED\n");
        return 0;
      default:
        printf("INVALID\n");
    }
  }
  return 0;
}
