#include <stdio.h>
#include "get_next_line.h"

int main() {
    char *line;
    int fd = STDIN_FILENO; // Reading from standard input

    while ((line = get_next_line(fd)) != NULL) {
        printf("Line read: %s\n", line);
        free(line);
    }

    return 0;
}