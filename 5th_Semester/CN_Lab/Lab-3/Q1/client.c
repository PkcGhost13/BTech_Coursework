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
    char buf[100];
    struct sockaddr_in sa;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = 60018;
    i = connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    for (int j = 0; j < 5; j++)
    {
        int check;
        char input[100];
        scanf("%s", input);
        check = strcmp(input, "exit");
        if (check == 0)
        {
            strcpy(buf, input);
            send(sockfd, buf, 100, 0);
        }
        else
        {
            strcpy(buf, input);
            send(sockfd, buf, 100, 0);
        }
        recv(sockfd, buf, 100, 0);
        check = strcmp(buf, "bye");
        if (check == 0)
        {
            printf("%s\n", buf);
            break;
        }
        printf("%s\n", buf);
    }
    close(sockfd);
}