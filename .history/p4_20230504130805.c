#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
void signal_handler(int sig){
    sleep(5);
    printf("Interrupt unblocked");
}
int main() {
    signal(SIGINT, signal_handler);
    printf("Interrupt blocked for 5 students");
    while(1){

    }
}