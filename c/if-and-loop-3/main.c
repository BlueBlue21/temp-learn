#include <stdbool.h>
#include <stdio.h>

int main(void) {
    // :D
    /*
     * BARK!
     */

    int count = 0;
    count = count + 1;
    count += 1;
    count++;
    printf("%i\n", count);

    int x = 1;
    int y = 2;
    if (x < y) {
        printf("y is bigger than x.\n");
    } else if (x > y) {
        printf("x is bigger than y.\n");
    } else if (x == y) {
        printf("x and y is same value.\n");
    } else {
        printf("Unknown.\n");
    }

    while (false) {  // 1
        printf("Hello, loop!\n");
    }

    for (int i = 1; i <= 50; i++) {
        printf("%i\n", i);
    }

    return 0;
}
