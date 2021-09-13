#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *right;
    struct node *left;
} tree;

tree *root = NULL;

void displayInorder(tree *node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        displayInorder(node->left);
        printf("%d : ", node->data);
        displayInorder(node->right);
    }
}

void insert(int item)
{
    struct node *ptr, *parentptr, *nodeptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Error in insertion/allocation \n");
    }
    else
    {
        ptr->data = item;
        ptr->left = NULL;
        ptr->right = NULL;
        if (root == NULL)
        {
            root = ptr;
            root->left = NULL;
            root->right = NULL;
        }
        else
        {
            parentptr = NULL;
            nodeptr = root;
            while (nodeptr != NULL)
            {
                parentptr = nodeptr;
                if (item < nodeptr->data)
                {
                    nodeptr = nodeptr->left;
                }
                else
                {
                    nodeptr = nodeptr->right;
                }
            }
            if (item < parentptr->data)
            {
                parentptr->left = ptr;
            }
            else
            {
                parentptr->right = ptr;
            }
        }
    }
}

int main(void)
{
    FILE *fread,*fwrite;
    fread=fopen("data.txt","r");
    printf("Reading input file...........\n");
    if(fread==NULL)
    {
        printf("Error reading file.");
        exit(0);
    }
    int n;
    printf("Creating and filling array...........\n");
    fscanf(fread,"%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        if(fgetc(fread)==EOF)
        {
            printf("Error in input file ");
            exit(0);
        }
        fscanf(fread,"%d",&arr[i]);
    }
    fclose(fread);
    printf("Inserting array elements to tree................. \n");
    for(int i=0;i<n;i++)
    {
        insert(arr[i]);
    }
    printf("Displaying the tree in inorder traversal : \n");
    displayInorder(root);
    return 0;
}