#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>

int main() {
    struct stat pathStat;
    stat(filename, &pathStat);
}