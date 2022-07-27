#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node *next;
} ll;

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
        temp->data = rand() % 100;
        temp->next = head;
        head = temp;
        n--;
    }
    printll();
}
void bubbleSort(int n)
{
    ll *temp = head;
    while (temp != NULL)
    {
        ll *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->data > temp2->data)
            {
                int t = temp->data;
                temp->data = temp2->data;
                temp2->data = t;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    printf("List after change : \n");
    printll();
    temp = head;
    int k = n;
    while (k > 0)
    {
        if(k==n-1)
            printf("Second smallest : %d",temp->data);
        if(k==2)
            printf("\nSecond largest : %d",temp->data);
        temp = temp->next;
        k--;
    }

}
int main()
{
    clock_t t = 0;
    printf("Enter the size (n) : ");
    int n;
    scanf("%d", &n);
    t = clock();
    create(n);
    bubbleSort(n);
    t = clock() - t;
    printf("\nTime taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}
/*
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    clock_t t;
    printf("Enter the size of the array (n) :");
    int n;
    scanf("%d", &n);
    int arr[n];
    t = clock();
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    bubbleSort(arr, n);
    t = clock() - t;
    printf("The second smallest number is : %d\nThe second largest number is : %d\n", arr[1], arr[n - 2]);
    printf("Time taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
}*/