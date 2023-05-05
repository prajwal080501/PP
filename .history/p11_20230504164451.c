#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
void handle_sigint(int sig) {
 printf("Received SIGINT signal\n");
}
void handle_sigalrm(int sig) {
 printf("Received SIGALRM signal\n");
}
void handle_sigtstp(int sig) {
 printf("Received SIGTSTP signal\n");
}
int main() {
 signal(SIGINT, handle_sigint);
 signal(SIGALRM, handle_sigalrm);
 signal(SIGTSTP, handle_sigtstp);
 while (1) {
 alarm(1);
 sleep(1);
 }
 return 0;
}