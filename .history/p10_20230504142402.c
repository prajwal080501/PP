#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#define PIPE_NAME "mypipe"

int main(){
    int fd;
    pid_t pid;
    char msg[] = "Hello Child from parent";
    mkfifo(PIPE_NAME, 0666);
    pid = fork();

    if(pid > 0){
        fd = open(PIPE_NAME, O_WRONLY);
        write(fd, msg, sizeof(msg));
        close(fd);
    }
    fd = open(PIPE_NAME, O_RDONLY);
    read(fd, msg, sizeof(msg));
    printf("Message from parent %s\n", msg)
    close(fd);
    unlink(PIPE_NAME);
}