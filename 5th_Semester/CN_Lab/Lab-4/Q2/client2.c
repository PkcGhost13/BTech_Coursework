#include "network.h"
int main()
{
    int i, sockfd;
    struct sockaddr_in sa;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = 60018;
    i = connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    int c1;
    recv(sockfd, &c1, sizeof(int), 0);
    printf("Received from server : %d\n", c1);
    int c2;
    printf("Enter the number : ");
    scanf("%d", &c2);
    printf("Sending to server...... \n");
    send(sockfd, &c2, sizeof(int), 0);
    close(sockfd);
}