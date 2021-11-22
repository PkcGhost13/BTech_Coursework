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

node *queue[MAX];
int front = -1, rear = -1;
void insert_queue(node *item);
node *del_queue();
int queue_empty();

node *stack[MAX];
int top = -1;
void push_stack(node *item);
node *pop_stack();
int stack_empty();

void post_trav(node *root)
{
    node *ptr = root;
    node *q;

    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    q = root;
    while (1)
    {
        while (ptr->lchild != NULL)
        {
            push_stack(ptr);
            ptr = ptr->lchild;
        }

        while (ptr->rchild == NULL || ptr->rchild == q)
        {
            printf("%d  ", ptr->data);
            q = ptr;
            if (stack_empty())
                return;
            ptr = pop_stack();
        }
        push_stack(ptr);
        ptr = ptr->rchild;
    }
    printf("\n");
}

void preorder_trav(node *root)
{
    node *ptr;
    ptr = root;
    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    push_stack(ptr);
    while (!stack_empty())
    {
        ptr = pop_stack();
        printf("%d  ", ptr->data);
        if (ptr->rchild != NULL)
            push_stack(ptr->rchild);
        if (ptr->lchild != NULL)
            push_stack(ptr->lchild);
    }
    printf("\n");
}

void inorder_trav(node *root)
{
    node *ptr;
    ptr = root;

    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    while (1)
    {
        while (ptr->lchild != NULL)
        {
            push_stack(ptr);
            ptr = ptr->lchild;
        }

        while (ptr->rchild == NULL)
        {
            printf("%d  ", ptr->data);
            if (stack_empty())
                return;
            ptr = pop_stack();
        }
        printf("%d  ", ptr->data);
        ptr = ptr->rchild;
    }
    printf("\n");
}

void insert_queue(node *item)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue[rear] = item;
}

node *del_queue()
{
    node *item;
    if (front == -1 || front == rear + 1)
    {
        printf("Queue Underflow\n");
        return 0;
    }
    item = queue[front];
    front = front + 1;
    return item;
}

int queue_empty()
{
    if (front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

void push_stack(node *item)
{
    if (top == (MAX - 1))
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = item;
}

node *pop_stack()
{
    node *item;
    if (top == -1)
    {
        printf("Stack Underflow....\n");
        exit(1);
    }
    item = stack[top];
    top = top - 1;
    return item;
}

int stack_empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void insert(node *root, node *new_node)
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

node *search(node *root, int key, node **parent)
{
    node *temp;
    temp = root;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("\nThe %d Element is Present", temp->data);
            return temp;
        }
        *parent = temp;

        if (temp->data > key)
            temp = temp->lchild;
        else
            temp = temp->rchild;
    }
    return NULL;
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

node *find_minimum(node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->lchild != NULL)
        return find_minimum(root->lchild);
    return root;
}

node *find_maximum(node *root1)
{
    node *root = root1;
    if (root->rchild != NULL)
        return find_maximum(root->rchild);
    return root;
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->lchild = deleteNode(root->lchild, key);

    else if (key > root->data)
        root->rchild = deleteNode(root->rchild, key);

    else
    {
        if (root->lchild == NULL)
        {
            node *temp = root->rchild;
            free(root);
            return temp;
        }
        else if (root->rchild == NULL)
        {
            node *temp = root->lchild;
            free(root);
            return temp;
        }
        node *temp = find_minimum(root->rchild);
        root->data = temp->data;
        root->rchild = deleteNode(root->rchild, temp->data);
    }
    return root;
}

void main()
{
    int choice;
    char ans = 'N';
    int key;
    node *new_node, *root, *tmp, *parent;
    node *get_node();
    root = NULL;

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
        printf("\n5. Search");
        printf("\n6. Find Smallest Element");
        printf("\n7. Find Largest Element");
        printf("\n8. Deletion of Tree");
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
                    root = new_node;
                else
                    insert(root, new_node);

                printf("\nWant To enter More Elements?(y/n)");
                ans = getch();
            } while (ans == 'y');
            break;

        case 2:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                printf("\nThe Inorder display : ");
                inorder_trav(root); // or use the recursive function
            }
            break;

        case 3:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                printf("\nThe Preorder display : ");
                preorder_trav(root); // or use the recursive function
            }
            break;

        case 4:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                printf("\nThe Postorder display : ");
                post_trav(root); // or use the recursive function
            }
            break;

        case 5:
            printf("\nEnter Element to be searched :");
            scanf("%d", &key);

            tmp = search(root, key, &parent);
            printf("\nParent of node %d is %d", tmp->data, parent->data);
            break;

        case 6:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                tmp = find_minimum(root);
                printf("\nThe Smallest element in the BST is : %d", tmp->data);
            }
            break;

        case 7:
            if (root == NULL)
                printf("Tree Is Not Created");
            else
            {
                tmp = find_maximum(root);
                printf("\nThe Largest element in the BST is : %d", tmp->data);
            }
            break;

        case 8:
            printf("\nEnter Element to be deleted :");
            scanf("%d", &key);
            deleteNode(root, key);
            break;
        }
    } while (choice != 0);
}
