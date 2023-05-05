#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char *argv[]) {
    struct stat pathStat;
    stat(filename, &pathStat);
}