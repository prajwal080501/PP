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
    printf("File permissions are : \n")
    printf((pathStat.st_mode & S_IRUSR) ? "r":"-");
    printf((pathStat.st_mode & S_IWUSR) ? "w":"-");
    printf((pathStat.st_mode & S_IXUSR) ? "x":"-");

    return0;
}