#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys.types.h>


int main() {
    pid_t pid;
    int fd[2];
    char msg[] = "Message from parent to child";

    pid = fork();
    if (pid <0){
        perror("Fork error");
    }
    if(pid > 1){
        close(fd[0]);
        write(fd[1], msg, sizeof(msg));
    }
}