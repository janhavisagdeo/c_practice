NUMBER PATTERN PROGRAM

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i = 0;
    int j = 0;

    while (i < 4) {
        j = 0;

        while (j <= i) {
            printf("%d", j + 1);
            j = j + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}
