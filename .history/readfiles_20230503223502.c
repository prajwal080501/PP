#include <stdio.h>
#include <dirent.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *entry;

    if(dp == NULL){
        perror("opendir: Path does not exist or could not be read.");
        return 1;
    }
    while((entry = readdir(dp)) != NULL){
        printf("%s\n", entry->d_name);
    }
}