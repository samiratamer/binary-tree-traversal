#include <stdio.h>
#include <stdlib.h>
struct tree_node {
int data;
struct tree_node* left;
struct tree_node* right;
};
void PrintBig(struct tree_node* current_ptr, int value) {
if (current_ptr == NULL) {
return;
}
PrintBig(current_ptr->left, value);
if (current_ptr->data >= value) {
printf("%d ", current_ptr->data);
}
PrintBig(current_ptr->right, value);
}
struct tree_node* createNode(int data) {
struct tree_node* newNode = (struct tree_node*)malloc(sizeof(struct
tree_node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
int main() {
struct tree_node* root = createNode(10);
root->left = createNode(5);
root->right = createNode(15);
root->left->left = createNode(2);
root->left->right = createNode(7);
root->right->left = createNode(12);
root->right->right = createNode(20);
int val = 10;
printf("Nodes greater than or equal to %d:\n", val);
PrintBig(root, val);
printf("\n");
return 0;
}
