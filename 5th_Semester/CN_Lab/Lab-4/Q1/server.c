#include "network.h"

typedef struct data
{
    int roll;
    char name[100];
    int marks[5];
} student;

int main()
{
    FILE *f = fopen("student.txt", "r");
    if (f == NULL)
    {
        printf("Error!");
        exit(1);
    }
    student s[4];
    for (int i = 0; i < 4; i++)
    {
        fscanf(f, "%d", &s[i].roll);
        fscanf(f, "%s", &s[i].name);
        for (int j = 0; j < 5; j++)
        {
            fscanf(f, "%d", &s[i].marks[j]);
        }
    }
    fclose(f);
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
    int roll;
    recv(fd1, &roll, sizeof(int), 0);
    for (int i = 0; i < 4; i++)
    {
        if (s[i].roll == roll)
        {
            send(fd1, &s[i], sizeof(student), 0);
            break;
        }
    }
    close(fd1);
}
