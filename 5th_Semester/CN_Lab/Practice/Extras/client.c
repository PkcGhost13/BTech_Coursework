//Write a socket program in C to transfer an array from the client to the server, the server will show the even and odd values, display all elements of array in reverse order, also send the result to the client.

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int i, sockfd;
    struct sockaddr_in sa;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = 60018;
    i = connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int input[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    send(sockfd, &n, 4, 0);
    send(sockfd, &input, n * sizeof(int), 0);
    printf("\nSent the array ...");
    recv(sockfd, &input, n * sizeof(int), 0);
    printf("\nReceived the reversed array ...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", input[i]);
    }
}