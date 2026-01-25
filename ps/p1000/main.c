#include <stdio.h>

#ifndef BOJ
#define scanf scanf_s
#endif

int main(void) {
    int a, b = 0;
    scanf("%i %i", &a, &b);
    printf("%i\n", a + b);

    return 0;
}
