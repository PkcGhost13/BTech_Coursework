#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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

node *lca(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->data > n1 && root->data > n2)
        return lca(root->lchild, n1, n2);

    if (root->data < n1 && root->data < n2)
        return lca(root->rchild, n1, n2);

    return root;
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
void inorder(node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        printf("%d ", temp->data);
        inorder(temp->rchild);
    }
}
void preorder(node *temp)
{
    if (temp != NULL)
    {
        printf("%d ", temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

void postorder(node *temp)
{
    if (temp != NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("%d ", temp->data);
    }
}

int main()
{
    node *new_node, *root;
    node *get_node();
    root = NULL;
    char c;
    printf("-------------Binary Tree LCA--------------------");
    printf("\nInsertion..............");
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
        printf("\nWant To enter More Elements?(y/n)");
        c = getch();
    } while (c == 'y');
    printf("\nDisplaying..............\n");
    printf("Inorder   : ");
    inorder(root);
    printf("\nPreorder  : ");
    preorder(root);
    printf("\nPostorder : ");
    postorder(root);
    printf("\n");
    int n1, n2;
    do
    {
        printf("\nEnter the keys whose LCA has to be found : \n");
        scanf("%d", &n1);
        scanf("%d", &n2);
        node *t = lca(root, n1, n2);
        printf("LCA of %d and %d is %d \n", n1, n2, t->data);
        printf("\nWant To Find out more LCA values ?(y/n)");
        c = getch();
    } while (c == 'y');
    printf("\n------------------------------------------------");
    return 0;
}
