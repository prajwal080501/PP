#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
    char text1[] = "Hello World";
    char text2[] = "My name is Prajwal Ladkat"
    char text3[] = "I love coding";
    char text4[] = "MSC Computer Science";

    int fd1 = open("temp.txt", O_WRONLY);
    int fd2 = dup(fd1);
    int fd3 = dup(fd2, 0);
    int fd4 = dup2(fd3, 1);


}