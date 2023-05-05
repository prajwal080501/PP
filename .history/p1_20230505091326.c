// Write a program to create a named pipe where 
// child sends message to parent
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>

#define PIPE_NAME "mypipe"
int main(){
    int fd;
    pid_t pid;
    char msg[] = "Hello World";

    mkfifo(PIPE_NAME, 0666);
    pid = fork();
    if(pid > 0){
        fd = open(PIPE_NAME, O_RDONLY);
        read(fd, msg, sizeof(msg));
        printf("Message from child %s", msg);
        close(fd);
        unlink(PIPE_NAME);
    }
    fd = open(PIPE_NAME, O_WRONLY);
    write(fd, msg, sizeof(msg));
    close(fd);
    return 0;
}