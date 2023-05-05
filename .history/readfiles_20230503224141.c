#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *sd;

    // Open the directory
    dir = opendir(argv[1]);
    if (dir == NULL) {
        printf("Unable to open directory.\n");
        exit(1);
    }

    // Read the directory entries
    while ((sd = readdir(dir)) != NULL) {
        // Check if the entry is a regular file
        if (sd->d_type == DT_REG) {
            printf("%s\n", sd->d_name);
        }
    }

    // Close the directory
    closedir(dir);

    return 0;
}
