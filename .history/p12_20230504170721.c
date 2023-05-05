#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
    off_t offset = 1024*1024;
    chat msg[] = "Hello World";
    fd = open("a.txt", O_WRONLY | O_CREAT, 0644);
    if(fd < 0){
        perror("open");
        return 1;
    }
    if(lseek(fd, offset, SEEK_SET) < 0){
        perror("lseek");
        return 1;
    }

    if(write(fd,msg, sizeof(msg)) < 0){
        perror("write");
        return 1;
    }

    if(close(fd) < 0){
        perror("close")
        return 1;
    }

    printf("File created Successfully!")
    return 0;

}