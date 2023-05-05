#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int count =0;
void signal_handler(int sig){
    count++
    printf("SIGINT signal occured");
}
int main(){
    signal(AIGINT, signal_handler);

    while(1){

    }
}