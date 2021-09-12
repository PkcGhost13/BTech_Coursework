#include <stdio.h>

typedef enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec}month;
typedef struct date{enum month m;int d;}date1;

struct date next_day(struct date date)
{
    struct date next;
    if((date.m== jan || date.m==mar ||date.m== may ||date.m== jul || date.m==aug || date.m==oct ) && date.d==31)
    {
        next.m=date.m+1;
        next.d=1;  
    }
    else if((date.m== jan || date.m==mar || date.m==may || date.m==jul || date.m==aug || date.m==oct ) && date.d<31)
    {
        next.m=date.m;
        next.d=date.d+1;
    }
    else if((date.m == apr || date.m==jun || date.m==sep || date.m==nov) && date.d==30)
    {
        next.m=date.m+1;
        next.d=1;
    }
    else if((date.m == apr || date.m==jun ||date.m== sep ||date.m== nov) && date.d<30)
    {
        next.m=date.m;
        next.d=date.d+1;
    }
    else if((date.m == feb) && date.d==28)
    {
        next.m=date.m+1;
        next.d=1;
    }
    else if((date.m == feb) && date.d<28)
    {
        next.m=date.m;
        next.d=date.d+1;
    }
    else if((date.m == dec) && date.d==31)
    {
        next.m=jan;
        next.d=1;
    }
    else if((date.m == dec) && date.d<31)
    {
        next.m=date.m;
        next.d=date.d+1;
    }
    else
    {
        printf("Error!");
    }
    return next;
}

void printdate(struct date date)
{
    switch (date.m) 
    {
      case jan:
        printf("January %d\n", date.d);
        break;
      case feb:
        printf("February %d\n", date.d);
        break;
      case mar:
        printf("March %d\n", date.d);
        break;
      case apr:
        printf("April %d\n", date.d);
        break;
      case may:
        printf("May %d\n", date.d);
        break;
      case jun:
        printf("June %d\n", date.d);
        break;
      case jul:
        printf("July %d\n", date.d);
        break;
      case aug:
        printf("August %d\n", date.d);
        break;
      case sep:
        printf("September %d\n", date.d);
        break;
      case oct:
        printf("October %d\n", date.d);
        break;
      case nov:
        printf("November %d\n", date.d);
        break;
      case dec:
        printf("December %d\n", date.d);
        break;
      default:
        printf("Out of range!");
        break;
    }
}

int main(void) {
    struct date date_1 = { feb, 28 };
    struct date date_2 = { mar, 14 };
    struct date date_3 = { oct, 31 };
    struct date date_4 = { dec, 31 };
    printf("The days are : \n");
    printdate(date_1);
    printdate(date_2);
    printdate(date_3);
    printdate(date_4);
    printf("\n");
    printf("The next days are : \n");
    printdate(next_day(date_1)); 
    printdate(next_day(date_2)); 
    printdate(next_day(date_3));
    printdate(next_day(date_4));
    printf("\n\n");

    return 0;
}