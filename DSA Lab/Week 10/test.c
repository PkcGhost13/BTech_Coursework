#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 50

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
void insert(node *root, node *new_node)
{
    node *t=root;
    printf("root : %d\n",root->data);
    if (new_node->data >t->data)
    {
        if (t->lchild == NULL)
            t->lchild = new_node;
        else
        {
            t=t->lchild;
            insert(t, new_node);
        }
    }
    if (new_node->data <t->data)
    {
        if (t->rchild == NULL)
            t->rchild = new_node;
        else
        {
            t=t->rchild;
            insert(t, new_node);
        }
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
void display(node *ptr, int level)
{
    int i;
    if (ptr == NULL)
        return;
    else
    {
        display(ptr->rchild, level + 1);
        printf("\n");
        for (i = 0; i < level; i++)
            printf("    ");
        printf("%d", ptr->data);
        display(ptr->lchild, level + 1);
    }
}
void main()
{
    int choice;
    char ans = 'N';
    int key;
    node *new_node, *root, *tmp, *parent,*head;
    node *get_node();
    root = NULL;
    head=NULL;

    printf("\nProgram For Binary Search Tree ");
    do
    {
        printf("\n----------------------------------");
        printf("\nBinary Search Tree Menu");
        printf("\n------------------------------------------------");
        printf("\n0. Quit");
        printf("\n1. Create");
        printf("\n2. In-Order Traversal");
        printf("\n3. Pre-Order Traversal");
        printf("\n4. Post-Order Traversal");
        printf("\n5. Display");
        printf("\n------------------------------------------------");
        printf("\nEnter your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            do
            {
                new_node = get_node();
                printf("\nEnter The Element : ");
                scanf("%d", &new_node->data);

                if (root == NULL)
                {
                    root = new_node;
                    head=root;
                }
                else
                    insert(head, new_node);

                printf("\nWant To enter More Elements?(y/n)");
                ans = getch();
            } 
            while (ans == 'y');
            break;

        case 2:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                printf("\nThe Inorder display : ");
                inorder(root); // or use the recursive function
            }
            break;

        case 3:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                printf("\nThe Preorder display : ");
                preorder(root); // or use the recursive function
            }
            break;

        case 4:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                printf("\nThe Postorder display : ");
                postorder(root); // or use the recursive function
            }
            break;

        case 5:
            display(root,0);
            break;
        }
    } while (choice != 0);
}