#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define MYPORT 4952 
#define MAXBUFLEN 200
int main()
{
    int sockfd;
    struct sockaddr_in my_addr;   
    struct sockaddr_in their_addr; 
    socklen_t addr_len;
    int num1, num2;
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
    {
        perror("socket");
        exit(1);
    }
    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(MYPORT);
    my_addr.sin_addr.s_addr = INADDR_ANY;
    if (bind(sockfd, (struct sockaddr *)&my_addr, sizeof my_addr) == -1)
    {
        perror("bind");
        exit(1);
    }
    addr_len = sizeof their_addr;
    recvfrom(sockfd, &num1, sizeof(int), 0,
             (struct sockaddr *)&their_addr, &addr_len);
    recvfrom(sockfd, &num2, sizeof(int), 0,
             (struct sockaddr *)&their_addr, &addr_len);
    printf("got packet from %s\n", inet_ntoa(their_addr.sin_addr));
    printf("The numbers are : %d, %d\n", num1, num2);
    num1 = num1 + num2;
    sendto(sockfd, &num1, sizeof(int), 0,
           (struct sockaddr *)&their_addr, sizeof their_addr);
    close(sockfd);
    return 0;
}