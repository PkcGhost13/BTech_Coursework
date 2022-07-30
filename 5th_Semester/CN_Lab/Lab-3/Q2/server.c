#include "network.h"
int reverseNumber(int number)
{
    int reverse = 0;
    while (number != 0)
    {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    return reverse;
}
int main()
{
    int sockfd, fd1, length, i;
    char buf[100];
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
    int input;
    recv(fd1, &input, 4, 0);
    printf("From client : %d\n", input);
    input = reverseNumber(input);
    send(fd1, &input, 100, 0);
    close(fd1);
}
