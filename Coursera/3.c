/* Program to give the sine of a value between 0 and 1 (non inclusive)*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    //The main function which converts the given value to sine
    double sineValue, x;

    printf(" Please Enter the Value to calculate Sine : ");

    scanf("%lf", &x);

    sineValue = sin(x);
    //calculation of the sine value using library function
    printf("\n The Sine value of %lf = %lf ", x, sineValue);
    //output is displayed
    return 0;
    //returns 0 and ends the program 
}