/*A function that prints a table of values for sine and cosine between (0, 1)*/
#include<stdio.h>
#include<math.h> 
//math library function to call sin() and cos()
int main(void)
{ 
//loop for changing values in radians and to print table
for(double i = 0; i <1.57079633; i+=0.01)
{
 printf("sin( %lf ) = %lf \t \t cos( %lf ) = %lf\n", i, sin(i),i,cos(i));
 //displaying table
}
return 0;
}