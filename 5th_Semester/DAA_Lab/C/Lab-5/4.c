#include <stdio.h>
#include <stdlib.h>

struct TNode
{
    int data;
    struct TNode *left;
    struct TNode *right;
};

struct TNode *newNode(int data);
int countLNodes(struct LNode *head);
struct TNode *sortedListToBSTRecur(struct LNode **head_ref, int n);

struct TNode *sortedListToBST(struct LNode *head)
{

    int n = countLNodes(head);

    return sortedListToBSTRecur(&head, n);
}

struct TNode *sortedListToBSTRecur(struct LNode **head_ref, int n)
{

    if (n <= 0)
        return NULL;
    struct TNode *left = sortedListToBSTRecur(head_ref, n / 2);
    struct TNode *root = newNode((*head_ref)->data);
    root->left = left;
    *head_ref = (*head_ref)->next;
    root->right = sortedListToBSTRecur(head_ref, n - n / 2 - 1);

    return root;
struct TNode *newNode(int data)
{
    struct TNode *node = (struct TNode *)
        malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}
void preOrder(struct TNode *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct LNode *head = NULL;

    /* Let us create a sorted linked list to test the functions
    Created linked list will be 1->2->3->4->5->6->7 */
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printf("\n Given Linked List ");
    printList(head);

    /* Convert List to BST */
    struct TNode *root = sortedListToBST(head);
    printf("\n PreOrder Traversal of constructed BST ");
    preOrder(root);

    return 0;
}