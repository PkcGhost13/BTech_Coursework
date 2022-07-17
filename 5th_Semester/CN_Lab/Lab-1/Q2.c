#include <stdio.h>
#include <string.h>
typedef struct info
{
    int roll;
    char name[50];
    float cgpa;
}into;

void callbyaddress(into *n)
{
    printf("%d %s %f\n",n->roll,n->name,n->cgpa);
}

int main()
{
    into abc;
    abc.roll=20051478;
    strcpy(abc.name,"Pawan");
    abc.cgpa=9.6;
    callbyaddress(&abc);
    return 0;
}