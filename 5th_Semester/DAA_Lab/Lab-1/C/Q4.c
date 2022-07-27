#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    clock_t t;
    printf("Enter the value of a || b || c : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    swap(&a, &b);
    swap(&a, &c);
    printf("\nThe swapped numbers are : %d %d %d", a, b, c);
    t = clock();
    t=clock()-t;
    printf("\nThe time taken to sort the array is : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}
