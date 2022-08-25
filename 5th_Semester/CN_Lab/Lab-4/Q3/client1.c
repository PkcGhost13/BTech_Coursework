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
    char s[100];
    while(1)
    {
        printf("You : ");
        fgets(s,100,stdin);
        send(sockfd, &s, sizeof(s), 0);
        recv(sockfd, &s, sizeof(s), 0);
        printf("Friend : %s\n", s);
        if(strcmp(s, "bye") == 0)
            break;
    }
    close(sockfd);
}