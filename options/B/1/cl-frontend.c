#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    char *p;
    char  buf[2048]; // Beware of buffer overruns!
    int   i;

    printf("Alternative frontend\n");
    for (i = 1; i<argc; i++) {
      printf("  argv[%2d] = %s\n", i, argv[i]);
    }

    if ((p = getenv("MSC_CMD_FLAGS")) != NULL) {
        printf("MSC_CMD_FLAGS:\n%s\n", p);
    }

    if ((p = getenv("MSC_IDE_FLAGS")) != NULL) {
        printf("MSC_IDE_FLAGS:\n%s\n", p);
    }

    return -1;
}
