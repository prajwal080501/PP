#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char *argv[]) {
    char *filename = argv[1];
    struct stat pathStat;
    stat(filename, &pathStat);
}