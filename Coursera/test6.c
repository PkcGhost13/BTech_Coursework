/*Program to read data from a file into an array and compute the average weight for the set of the elephant seals.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   //file reading object
   int weights[1000];
   int c=0;
   double avg=0;
   if ((fptr = fopen("elephant_seal_data.txt","r")) == NULL)
   {
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   while(fgetc(fptr)!=EOF)
   {
       //reading the data from the file and storing them in the array
       fscanf(fptr,"%d", &weights[c]);
       c++;
   }
   
    for(int i=0;i<1000;i++)
    {
        //adding the elements in the array
        avg+=weights[i];
    }
    avg/=1000.0;
    //calculating average of given data
    printf("Value of average weight %lf \n", avg);
    //displaying output 
    fclose(fptr); 
  
   return 0;
}