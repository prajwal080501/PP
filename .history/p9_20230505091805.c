#include <stdio.h>
#include <stdlib.h>
#include, signal.h>
void sigquit_handler(int sig)
{
    sleep(5);
    printf("Unblocking Signal");
}

int main()
{
    signal(SIGQUIT, sigquit_handler);
}