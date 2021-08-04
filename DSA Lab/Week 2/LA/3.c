/*Write a menu driven program to create an array and perform following operation.
1. Insert  element at the beginning.
2. Insert element at the end.
3. Insert element at any position.
4. Delete element at the beginning.
5. Delete element at the end.
6. Delete element at any position.
7. Display the array.
8. Sort the array.
In this program you check if array is full then you can't insert the element. similarly if array is empty you can not delete.
*/
#include <stdio.h>
#include <stdlib.h>

int a[5], pos, elem;
int n = 0;
void create();
void display();
void insert();
void del();
void sort();
void main()
{
    int choice;
    while (1)
    {
        printf("\n\n---------Select a Valid option max array size 5-------");
        printf("\n=>1. Create an array of N integers");
        printf("\n=>2. Display of array elements");
        printf("\n=>3. Insert at a given position");
        printf("\n=>4. Delete an element at a given position");
        printf("\n=>5. Sort the Array");
        printf("\n=>6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            sort();
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("\nPlease enter a valid choice:");
        }
    }
}
void create()
{
    int i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display()
{
    int i;
    if (n == 0)
    {
        printf("\nNo elements to display");
        return;
    }
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++)
        printf("%d\t ", a[i]);
}
void insert()
{
    int i;
    if (n == 5)
    {
        printf("\nArray is full. Insertion is not possible");
        return;
    }
    do
    {
        printf("\nEnter a valid position where element to be inserted:    ");
        scanf("%d", &pos);
    } while (pos > n);
    printf("\nEnter the value to be inserted:   ");
    scanf("%d", &elem);
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = elem;
    n = n + 1;
    display();
}
void del()
{
    int i;
    if (n == 0)
    {
        printf("\nArray is empty and no elements to delete");
        return;
    }
    do
    {
        printf("\nEnter a valid position from where element to be deleted: ");
        scanf("%d", &pos);
    } while (pos >= n);
    elem = a[pos];
    printf("\nDeleted element is : %d \n", elem);
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    display();
}
void sort()
{
    int temp = 0;

    //Calculate length of array a
    int length = sizeof(a) / sizeof(a[0]);

    //Displaying elements of original array
    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    //Sort the array in ascending order
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n");

    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}
