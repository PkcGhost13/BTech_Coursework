#include <stdio.h>
struct point{
double x;
double y;
} p1;
int main(void)
{
    struct point* ptr=&p1;
    printf("%f",ptr->y);
}
