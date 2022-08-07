#include "network.h"

typedef struct data
{
    int roll;
    char name[100];
    int marks[5];
} student;

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
    int roll;
    scanf("%d", &roll);
    send(sockfd, &roll, sizeof(int), 0);
    student d;
    recv(sockfd, &d, sizeof(student), 0);
    printf("\nRoll: %d\nName: %s\nMarks: ", d.roll, d.name);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", d.marks[i]);
    }
    close(sockfd);
}