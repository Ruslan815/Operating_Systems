#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
//#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
//pid_t parent_pid = (int) getpid();
//int i=0;

//pid_t child_pid=
fork();
fork();
fork();
fork();
/*
while(i++ < 5)
{
	if(child_pid == 0)
	{
		printf("Child process was created, and now have this PID: %d\n", (int) getpid());
	}
	else
	{
		printf("This is parent process, and now have this PID: %d\nAnd this parent PID: %d\n", (int) getpid(), parent_pid);
	}
}

char tempVar[80] = "ps | grep ";
char pIdStr[80];
sprintf(pIdStr, "%d", getpid());
strcat(tempVar, pIdStr);
system(tempVar);
*/

//int z;
//scanf("%d", &z);

system("echo 111");
system("ps");
system("pstree");
system("echo 777");

system("sleep 360");

return 0;
}
