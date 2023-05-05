#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *entry;

    dp = opendir(argv[1]);
    if(dp == NULL){
        printf("Error opening directory\n");
        exit(1);
    }
    while(entry = readdir(dp))
    {
        
    }
}