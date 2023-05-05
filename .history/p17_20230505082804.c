#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>
#include<fcntl.h>

int main() {
    char buf[256];
    pid_t pid;

    int fd = open("a.txt", O_RDWR | O_CREAT, 0644);
    
    pid = fork();

    if(pid < 0){
        perror("Fork");
        exit(1);
    }
    else if(pid == 0){
        sprintf(buf, "Child process Writing \n");
        write(fd, buf, strlen(buf));
        exit(0);
    }
}