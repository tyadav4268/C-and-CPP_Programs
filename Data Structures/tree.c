#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(){

    struct node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);

    printf("In-order Traversal:\n");
    inorderTraverse(root);
    printf("Pre-order Traversal: \n");
    preorderTraverse(root);
    printf("Post-order Travesal: \n");
    postorderTraverse(root);
    printf("Level-order Traversal: \n");
    levelorderTraverse(root);
    printf("All Traversals Done Successfully.\n\n");
    printf("Height of the Tree: %d\n", heightofTree(root));
    printf("Size of the Tree: %d\n", sizeofTree(root));
    freeAllNodes(root);

    return 0;
}
