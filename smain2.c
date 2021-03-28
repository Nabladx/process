#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define NUM_CHILDREN 2
int main(int argc, char *argv[])
{	
	for (int i = 0;i < 3;i++)
  {
	pid_t pid = fork();
	if(pid < 0){
		perror("fork failed.");
		exit(1);
	}
	else if (pid == 0){
		char* args[] = {
			"./smain",NULL
		};
		execv(args[0], args);
	}
	printf("Parent is now doing something amazing...\n");
	printf("Parent is waiting  on child process.\n");
	for(int i = 0;i < NUM_CHILDREN;i++)
	{
		wait(NULL);
	}
  }
	return 0;
}
