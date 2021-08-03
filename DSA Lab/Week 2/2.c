/*WAP to add two distances (in km-meter) by passing structure to a
function.*/
#include <stdio.h>

struct Distance 
{
    int km;
    float meter;
}result;
void add(struct Distance a,struct Distance b)
{
    result.km = a.km +b.km;
    result.meter = a.meter +b.meter;
    while(result.meter >= 1000)
    {
        result.meter = result.meter - 1000;
        result.km+=1;
    }
}
int main()
{
    struct Distance d1,d2;
    printf("Enter First Distance\n");
    printf("Enter Kilometer:\n");
    scanf("%d",&d1.km);
    printf("Enter Meter:\n");
    scanf("%f",&d1.meter);

    printf("Enter second distance\n");
    printf("Enter Kilometer:\n");
    scanf("%d",&d2.km);
    printf("Enter Meter\n");
    scanf("%f",&d2.meter);

    add(d1,d2);
    printf("Sum of Distances = %dkm - %.2fm",result.km,result.meter);
}