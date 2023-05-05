#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
    off_t offset = 1024*1024;
    fd = open("a.txt", O_WRONLY | O_CREAT, 0644);
}