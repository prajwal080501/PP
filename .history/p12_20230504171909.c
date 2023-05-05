#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
    char msg[] = "This is a message";
    off_t offset = 1024;

    int fd = open("hole.txt", O_WRONLY | O_CREAT, 0644);

    if (fd < 0){
        perror("Open");
        return 1;
    }

    if(lseek(fd, offset, SEEK_SET) < 0){
        perror("lseek");
        return 1;
    }
    if(write(fd, msg, sizeof(msg)) <0 ){
        perror("Write");
        return 1;
    }
    if(close(fd) <0){
        perror("close");
        return 1;
    }
}