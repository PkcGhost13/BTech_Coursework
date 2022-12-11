#include "udp.h"
int gcd(int a, int b)
{
    int result = ((a < b) ? a : b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; 
}
int main()
{
    int sockfd;
    struct sockaddr_in my_addr;   
    struct sockaddr_in their_addr1,their_addr2; 
    socklen_t addr_len1,addr_len2;
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
    addr_len1 = sizeof their_addr1;
    addr_len2 = sizeof their_addr2;
    recvfrom(sockfd, &num1, sizeof(int), 0,
             (struct sockaddr *)&their_addr1, &addr_len1);
    printf("got packet from %s\n", inet_ntoa(their_addr1.sin_addr));
    recvfrom(sockfd, &num2, sizeof(int), 0,
             (struct sockaddr *)&their_addr2, &addr_len2);
    printf("got packet from %s\n", inet_ntoa(their_addr2.sin_addr));
    printf("The numbers are : %d, %d\n", num1, num2);
    num1 = gcd(num1,num2);
    sendto(sockfd, &num1, sizeof(int), 0,
           (struct sockaddr *)&their_addr1, sizeof their_addr1);
    sendto(sockfd, &num1, sizeof(int), 0,
           (struct sockaddr *)&their_addr2, sizeof their_addr2);
    close(sockfd);
    return 0;
}