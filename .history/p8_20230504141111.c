#include<stdio.h>
#include<dirent.h>
#include<sys/path.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    DIR *dp;
    struct stat pathStat;
    stat(fileName, &pathStat)
    if(S_ISREG(pathStat.st_mode)){
        printf("Regular file")
    }
    else if(S_ISDIR(pathStat.st_mode)){
        printf("Directory");
    }
}