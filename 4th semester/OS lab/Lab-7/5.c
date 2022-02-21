#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("hello process is %d of parent : %d\n",getpid(),getppid());
	fork();
	printf("child : %d of parent : %d \n",getpid(),getppid());
	fork();
	printf("child : %d of parent : %d\n",getpid(),getppid());
}
