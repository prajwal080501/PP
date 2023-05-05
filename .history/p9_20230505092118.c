#include <stdio.h>
#include <stdlib.h>
#include<signal.h>
#include<unistd.h>
void sigquit_handler(int sig)
{
    sleep(5);
    printf("Unblocking Signal\n");
    exit(0);
}

int main()
{
    signal(SIGQUIT, sigquit_handler);
    printf("Blocking SIGQUIT signal\n");

    while(1){

    }
    return 0;
}