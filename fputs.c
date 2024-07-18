#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Example of fputs() function in pure C

int main() {
    FILE *fp = fopen("write.txt", "w");
    fputs("Real Python!", fp);
    fclose(fp);
    return 0;
}
