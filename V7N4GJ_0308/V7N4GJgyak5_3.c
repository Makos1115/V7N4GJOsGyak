#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid;
	int status;
	if((pid = fork())<0)
		perror("fork hiba");
	else if(pid == 0)
		exit(7);
	if(wait(&status) != pid)
		perror("wait hiba");
	if(WIFEXITED(status))
		printf("Norm�l befejez�s, visszat�r�si �rt�k %d\n", WEXITSTATUS(status));
	return 0;
}