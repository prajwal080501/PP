#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
    char msg[] = "This is a message";
    off_t offset = 1024;

    int fd = open("hole.txt", O_WRONLY | O_CREAT, 0644);
}