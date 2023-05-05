#include<stdio.h>
#include<stdlib.h>
#include,signal.h>


int main(){
    signal(SIGQUIT, sigquit_handler);
}