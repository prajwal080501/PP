#include<stdio.h>
#include<unistd.h>
#include<stflib.h>
#include<sys/stat.h>
#include<sys/types.h>

#define PIPE_NAME "mypipe"
int main(){
    int fd;
    pid_t pid;
    char msg[] = "Hello World";

    mkfifo(PIPE_NAME, 0666);
    pid = fork();
    if(pid > 0){
        fd = open(PIPE_NAME, O_RDONLY);
        printf("Message from child %s", msg);
        close(fd);
    }
}