#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *p,n,i;
      printf("How many numbers you want to enter: ");
      scanf("%d",&n);
      p=(int*)malloc(n * sizeof(int));
      printf("\nEnter %d Numbers:\n",n);
      for(i=0;i<n;i++)
      {
            scanf("%d",p+i);
      }
      int s;
      printf("\nEnter the search element :");
      scanf("%d",&s);
      for(i=0;i<n;i++)
      {
          if(*(p+i)==s)
          {
              printf("Search element found at : %d",i);
              break;
          }
      }
      return 0;
}