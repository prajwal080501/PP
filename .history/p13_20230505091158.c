#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>


int main() {
    pid_t pid;

    pid = fork();

    if(pid == 0){
        printf("Child process is Running\n");
        while(1){
            printf("Child process with ID %d\n", getpid());
        }
    }
    else {
        printf("Parent Process with PID %d\n", getpid());

        sleep(2);
        printf("Sending SIGSTOP message to child\n");
        kill(pid, SIGSTOP);
        printf("Child process stopped\n");

        sleep(2);
        printf("Sending SIGCONT signal to child\n");
        kill(pid, SIGCONT);
        printf("Child process resumed\n");

        sleep(2);
        printf("Sending SIGTERM signal to child\n");
        kill(pid, SIGTERM);
        printf("Child process terminated\n");
    }
    return 0;
}