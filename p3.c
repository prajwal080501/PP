// Write a program to catch SIGINT signal five times 
// and print message ‘SIGINT signal occurred ’ every 
// timed and exit at sixth occurrence. Also ignore 
// every occurrence of SIGTSTP signal


#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int count = 0;
void signal_handler(int sig)
{
    count++;
    printf("SIGINT signal occured\n");

    if (count == 6)
    {
        exit(1);
    }
}
int main()
{
    signal(SIGINT, signal_handler);

    while (1)
    {
    }
    return 0;
}