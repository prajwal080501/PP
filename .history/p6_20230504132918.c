#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *entry;

    dp = opendir(argv[1]);

    if(dp == NULL){
        printf("Error opening file");
        exit(1);
    }
    while(entry = readdir(dp)){
        if(entry->d_type == DT_REG){
            count++;
        }
    }
}