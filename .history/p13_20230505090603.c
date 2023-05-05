#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main() {
    pid_t pid;

    pid = fork();

    if(pid == 0){
        printf("Child process is Running");
        while(1){
            printf("Child process with ID %d", getpid());
        }
    }
}