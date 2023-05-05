#include <stdio.h>
#include <dirent.h>
#include <unistd.h>


int main(int argc, char *argv[]){
    DIR *dir;
    struct dirent *entry;
    int count;

    dir = opendir(argv[1]);

    if (dir == NULL){
        printf("Unable to open directory.\n");
    }
    while(entry == readdir
}