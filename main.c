#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
        pid_t pid;
        pid = fork();
        //execlp("/bin/ps","/bin/ps", "-l", "&", NULL);
	if(pid == 0) {
		//printf("Node son %d\n", pid);
		//execlp("/bin/ls", "ls", "-la", NULL);
		//fork();
		//sleep(10);
		//execlp("/bin/ps","/bin/ps", "-l", NULL);
		exit(0);
        }
	//execlp("&", NULL);
	execlp("/bin/ps","/bin/ps", "-l", NULL);
	sleep(10);
	//printf("Node father %d\n", pid);
        return 0;
}
