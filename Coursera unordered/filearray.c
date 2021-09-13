#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *fread,*fwrite;
    fread=fopen("data.txt","r");
    if(fread==NULL)
    {
        printf("Error reading file.");
        exit(0);
    }
    int n;
    fscanf(fread,"%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(fgetc(fread)==EOF)
        {
            printf("Error in input file ");
            exit(0);
        }
        fscanf(fread,"%d",&arr[i]);
    }
    fclose(fread);
    double avg=0.0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        avg=avg+arr[i];
    }
    avg=avg*1.0/n;
    fwrite=fopen("answer-hw3.txt","w");
    fprintf(fwrite,"The maximum among the input elements is : %lf\n",avg);
    fprintf(fwrite,"The average of the given input elements is : %d\n",max);
    fclose(fwrite);
    return 0;
}