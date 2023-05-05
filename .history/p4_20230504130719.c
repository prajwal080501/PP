#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void signal_handler(int sig){
    sleep(5);
    printf("Interrupt unblocked");
}
int main() {
    signal(SIGINT, signal_handler);
    while(1){

    }
}