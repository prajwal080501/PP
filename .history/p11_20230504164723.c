#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
void sigint_handler(int sig){
    printf("SIGINT signal received");
}
void sigalrm_handler(){
    printf("SIGALRM signal received");
}
void sigstp_handler(){
    printf("SIGTSTP signal received");
}
int main(){
    signal(SIGINT, sigint_handler);
    signal(SIGALRM, sigalrm_handler);
    signal(SIGTSTP, sigstp_handler);

    while(1){
        alarm(1);
        sleep(1);
    }
    return 0;
}