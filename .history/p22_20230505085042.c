#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
int count = 0;

void sigquit_handler(int sig){
    printf('SIGQUIT signal occured');
}
int main(){

}