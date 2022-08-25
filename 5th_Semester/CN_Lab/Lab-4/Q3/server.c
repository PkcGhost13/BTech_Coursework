#include "network.h"

int main()
{
    int sockfd, fd1, fd2, length, i;
    struct sockaddr_in sa, ta1, ta2;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 60018;
    i = bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    printf("test %d%d\n", sockfd, i);
    listen(sockfd, 10);
    length = sizeof(sa);
    fd1 = accept(sockfd, (struct sockaddr *)&ta1, &length);
    fd2 = accept(sockfd, (struct sockaddr *)&ta2, &length);
    int in1, in2;
    char s[100];
    while(1)
    {
        recv(fd1, &s, sizeof(s), 0);
        printf("Received from client 1 :%s\n", s);
        printf("Sending to client 2...... \n");
        send(fd2, &s, sizeof(s), 0);
        recv(fd2, &s, sizeof(s), 0);
        printf("Received from client 2 :%s\n", s);
        printf("Sending to client 1...... \n");
        send(fd1, &s, sizeof(s), 0);
        if(strcmp(s, "bye") == 0)
            break;
    }
    close(sockfd);
    close(fd1);
    close(fd2);
}
