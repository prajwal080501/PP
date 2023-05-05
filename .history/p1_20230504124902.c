#include<stdio.h>
#include<unistd.h>
#include<stflib.h>
#include<sys/stat.h>
#include<sys/types.h>

#define PIPE_NAME "mypipe"
int main(){
    int fd;
    pid_t pid;
    char msg[] = "Hello World";

}