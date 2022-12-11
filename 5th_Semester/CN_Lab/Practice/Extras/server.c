//Write a socket program in C to transfer an array from the client to the server, the server will show the even and odd values, display all elements of array in reverse order, also send the result to the client.

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>
void printOddEven(int *arr, int n)
{
    printf("\nOdd: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nEven: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
void reverseArray(int arr[], int n)
{
    printf("\nReversing the array ....");
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int sockfd, fd1, length, i;
    struct sockaddr_in sa, ta1;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 60018;
    i = bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    printf("test %d%d\n", sockfd, i);
    listen(sockfd, 5);
    length = sizeof(sa);
    fd1 = accept(sockfd, (struct sockaddr *)&ta1, &length);
    int n;
    recv(fd1, &n, 4, 0);
    int input[n];
    recv(fd1, &input, n * sizeof(int), 0);
    printf("\nReceived the array ...");
    printOddEven(input, n);
    reverseArray(input, n);
    send(fd1, &input, n * sizeof(int), 0);
}
