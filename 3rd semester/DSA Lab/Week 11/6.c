#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
} node;

node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}
int isBST1(node *root, int min, int max)
{

    if (root == NULL)
    {
        return 1;
    }

    if (root->data < min || root->data > max)
    {
        return 0;
    }

    return isBST1(root->lchild, min, root->data - 1) &&
           isBST1(root->rchild, root->data + 1, max);
}
int isBST(node *node)
{
    return (isBST1(node, INT_MIN, INT_MAX));
}

int insert(node *root, node *new_node)
{
    if (new_node->data < root->data)
    {
        if (root->lchild == NULL)
            root->lchild = new_node;
        else
            insert(root->lchild, new_node);
    }

    if (new_node->data > root->data)
    {
        if (root->rchild == NULL)
            root->rchild = new_node;
        else
            insert(root->rchild, new_node);
    }
}

int main()
{
    node *new_node, *root;
    node *get_node();
    root = NULL;
    char c;
    do
    {
        new_node = get_node();
        printf("\nEnter The Element : ");
        scanf("%d", &new_node->data);
        if (root == NULL)
        {
            root = new_node;
        }
        else
        {
            insert(root, new_node);
        }
        printf("\nroot data : %d", root->data);
        printf("\nWant To enter More Elements?(y/n)");
        c = getch();
    } while (c == 'y');

    if (isBST(root))
    {
        printf("\nThe given tree is a Valid Binary Tree");
    }
    else
    {
        printf("\nThe given tree is NOT a Valid Binary Tree");
    }

    return 0;
}
