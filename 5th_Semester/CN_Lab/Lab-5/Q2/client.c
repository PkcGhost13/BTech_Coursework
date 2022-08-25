#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define SERVERPORT 4952 // the port users will be connecting to
int main()
{
    int sockfd;
    struct sockaddr_in their_addr;
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
    {
        perror("socket");
        exit(1);
    }
    their_addr.sin_family = AF_INET;         // host byte order
    their_addr.sin_port = htons(SERVERPORT); // short, network byte order
    their_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    int num1, num2;
    printf("Enter the two numbers : ");
    scanf("%d %d", &num1, &num2);
    sendto(sockfd, &num1, sizeof(int), 0,
           (struct sockaddr *)&their_addr, sizeof their_addr);
    sendto(sockfd, &num2, sizeof(int), 0,
           (struct sockaddr *)&their_addr, sizeof their_addr);
    printf("sent bytes to %s\n", inet_ntoa(their_addr.sin_addr));
    recvfrom(sockfd, &num1, sizeof(int), 0,
             (struct sockaddr *)&their_addr, sizeof their_addr);
    printf("The summation is : %d\n", num1);
    close(sockfd);
    return 0;
}