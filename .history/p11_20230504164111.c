#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
void sigint_handler(){
    printf("SIGINT signal received");
}
int main(){
    signal(SIGINT, sigint_handler);
    signal(SIGALRM, sigalrm_handler);
    signal(SIGSTP, sigstp_handler);
}