// write a c program to list regular files in a directory

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(int argc, char *argv[]){
    DIR *dir;
    struct dirent *sd;
    struct stat fileStat;
    char *path = argv[1];

    dir = opendir(path);

    if(dir == NULL){
        printf("Error! Unable to open directory.\n");
        exit(1);
    }

    while((sd = readdir(dir)) != NULL){
        if(sd->d_type == DT_REG){
            printf(">> %s\n", sd->d_name);
        }
    }

    closedir(dir);

    return 0;
}