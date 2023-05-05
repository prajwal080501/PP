#include<stdio.h>
#include<stdlib.h>
#include,signal.h>
void sigquit_handler(int sig){
    
}

int main(){
    signal(SIGQUIT, sigquit_handler);
}