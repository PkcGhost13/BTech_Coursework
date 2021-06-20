/*A function that prints a table of values for sine and cosine between (0, 1)*/
#include<stdio.h>
#include<math.h> 
//math library function to call sin() and cos()
int main(void)
{ 
    int a, win[10];

    FILE *elephantfile= fopen("elephant_seal_data.txt","r");
    double weights[1000];
    char n[4];
    if (elephantfile == NULL)
    {
        printf("Error opening file.\n");
        exit(0);
    }

    for(int i =0;1;i++){
        if(fgets(n[i], 10, elephantfile) == NULL);
            break;

            if(i < 10)
            {
                a = atoi(weights[i]);
                win[i] = a;
            }
         }

    fclose(elephantfile);
//loop for changing values in radians and to print table
for(double i = 0; i <1.57079633; i+=0.01)
{
 printf("sin( %lf ) = %lf \t \t cos( %lf ) = %lf\n", i, sin(i),i,cos(i));
 //displaying table
}
return 0;
}