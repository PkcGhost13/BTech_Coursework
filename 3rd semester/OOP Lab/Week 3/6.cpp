#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    cout<<"Sorting......."<<endl;
   int i, j;
   bool flag;
   for (i = 0; i < n-1; i++)
   {
     flag = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
           flag = true;
        }
     }
     if (flag == false)
        break;
   }
}

void selectionSort(int arr[], int n)
{
    cout<<"Sorting......."<<endl;
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for(j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        {
            min_idx = j;
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}

void display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int n;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The input array is : "<<endl;
    display(arr,n);
    cout<<"Please select among the given sorting options :"<<endl;
    cout<<"1. Bubble Sort \n2. Selection Sort"<<endl;
    cout<<"Your choice : ";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            bubbleSort(arr,n);
            cout<<"The given array after bubble sort is :"<<endl;
            display(arr,n);
            break;
        case 2:
            selectionSort(arr,n);
            cout<<"The given array after selection sort is :"<<endl;
            display(arr,n); 
            break;
        default:
            cout<<"Error!!!"<<endl;
            break;
    }
    return 0;
}