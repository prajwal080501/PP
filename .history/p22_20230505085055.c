#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
int count = 0;

void sigquit_handler(int sig){
    count++;
    printf('SIGQUIT signal occured\n');

}
int main(){

}