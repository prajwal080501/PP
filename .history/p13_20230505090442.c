#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main() {
    pid_t pid;

    pid = fork();

    if(pid > 0){
        printf("Parent Process is Running with ID %d", getpid());
    }
}