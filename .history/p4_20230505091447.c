// Write a program to block SIGINT signal for 5
// seconds


#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
void signal_handler(int sig){
    sleep(5);
    printf("Interrupt unblocked");
    exit(0);
}
int main() {
    signal(SIGINT, signal_handler);
    printf("Interrupt blocked for 5 students");
    while(1){

    }
}