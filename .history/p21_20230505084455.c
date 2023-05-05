#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *entry;

    dp = opendir(argv[1]);
}