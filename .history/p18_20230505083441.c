#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<fcntl.h>

int main (int argc, char *argv[]){

    DIR *dp;
    struct dirent *entry;

    dp = opendir(argv[1]);

    if(dp == NULL){
        printf("Error opening directory");
    }

    while(entry = readdir(dp)){
        printf("-> %s", entry->d_name);
    }

    return 0;
}