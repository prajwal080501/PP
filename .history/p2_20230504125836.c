#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *entry;

    dp = open(argv[1]);
    if(dp == NULL){
        printf("Error opening directory");
        exit(1);
    }
    while(entry = readdir(dp)){
        if(entry->d_type == DT_RED){
            printf("%s", entry->d_name);
        }
    }
}