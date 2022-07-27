#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node *next;
} ll;
int product = 1;
ll *head = NULL;
void printll()
{
    ll *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void create(int n)
{
    while (n > 0)
    {
        ll *temp = malloc(sizeof(ll));
        temp->data = rand() % 10;
        product *= temp->data;
        temp->next = head;
        head = temp;
        n--;
    }
    printll();
}
void productExceptSelf()
{
    ll *temp = head;
    while (temp != NULL)
    {
        temp->data = product / temp->data;
        temp = temp->next;
    }
    printf("List after change : \n");
    printll();
}
int main()
{
    clock_t t = 0;
    printf("Enter the size (n) : ");
    int n;
    scanf("%d", &n);
    t = clock();
    create(n);
    productExceptSelf();
    t = clock() - t;
    printf("\nTime taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}
/*
void productExceptSelf(int arr[],int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    for (int i = 0; i < n;i++)
    {
        arr[i] = product / arr[i];
    }
}
int main(void)
{
    clock_t t;
    printf("Enter the size of the array : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    t = clock();
    //int arr[] = {3, 4, 5, 1, 2};
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()/100000000;
    }
    printf("\nThe entered array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    productExceptSelf(arr, n);
    printf("\nThe swapped array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    t = clock() - t;
    printf("\nTime taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;

}*/