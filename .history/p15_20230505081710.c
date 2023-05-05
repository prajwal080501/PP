#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/path.h>

int main(int argc, char *argv[]){
    char *filename = argv[1];
    struct stat pathStat;

    stat(filename, &pathStat);

    if(S_ISDIR(pathStat.st_mode)){
        printf("Directory");
    }
    else{
        printf("Regular");
    }

    printf("\n File Group permissons are : \n");

    printf((pathStat.st_mode & S_IRGRP) ? "r" : "-" );

}