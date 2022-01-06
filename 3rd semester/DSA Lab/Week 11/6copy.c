#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int isBST1(struct node *node, int min, int max);

int isBST(struct node *node)
{
    return (isBST1(node, INT_MIN, INT_MAX));
}

int isBST1(struct node *node, int min, int max)
{

    if (node == NULL)
        return 1;

    if (node->data < min || node->data > max)
        return 0;

    return isBST1(node->left, min, node->data - 1) &&
           isBST1(node->right, node->data + 1, max);
}

struct node *newNode(int data)
{
    struct node *node = (struct node *)
        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main()
{
    struct node *root = newNode(3);
    root->left = newNode(5);
    root->right = newNode(2);
    root->left->left = newNode(2);
    root->left->right = newNode(4);
    root->right->left = newNode(6);

    if (isBST(root))
        printf("It is BST");
    else
        printf("It is Not a BST");

    getchar();
    return 0;
}