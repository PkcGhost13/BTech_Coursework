#include <stdio.h>
#include <ctype.h>

typedef enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec } month;
typedef struct date 
{  
    enum month m; 
    int d; 
};

void print_month(struct date date) { 
    switch (date.m) {
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

enum month next_day(struct date next) { 
    if (next.m == jan || mar || may || jul || aug || oct || dec) {
        next.d + 1 % 31;
    }
    else if (next.m == apr || jun || sep || nov) {
    
        printf("%d",next.d + 1 % 30);
    }
    else if (next.m == feb) {
        next.d + 1 % 28;
        if (next.d > 28)
            next.m = mar;
    }

    return (month)next.m;
}

int main(void) {
    struct date date_1 = { feb, 28 };
    struct date date_2 = { mar, 14 };
    struct date date_3 = { oct, 31 };
    struct date date_4 = { dec, 31 };

    print_month(date_1);
    print_month(date_2);
    print_month(date_3);
    print_month(date_4);
    printf("\n");
    /*print_month(next_day(date_1)); //err C2440 
    print_month(next_day(date_2)); //err C2440
    print_month(next_day(date_3)); //err C2440
    print_month(next_day(date_4)); //err C2440
    printf("\n\n");
    */

    return 0;
}