#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
int count = 0;

void sigquit_handler(int sig){
    count++;
    printf('SIGQUIT signal occured\n');
    if(count == 5){
        printf("\n Exiting\n");
    }

}
int main(){
    signal(SIGQUIT, sigquit_handler);
    while(1){
        
    }
}