#include <stdio.h>
#include <dirent.h>
#include <unistd.h>


int main(int argc, char *argv[]){
    DIR *dir;
    struct dirent *entry;
    int count = 0;

    dir = opendir(argv[1]);

    if (dir == NULL){
        printf("Unable to open directory.\n");
        exit(1);
    }
    while(entry == readdir
}