#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
void sigint_handler(){
    printf("SIGINT signal received");
}
void sigalrm_handler(){
    printf("SIGALRM signal received");
}
void sigstp_handler(){
    printf("SIGSTP signal received");
}
int main(){
    signal(SIGINT, sigint_handler);
    signal(SIGALRM, sigalrm_handler);
    signal(SIGSTP, sigstp_handler);
}