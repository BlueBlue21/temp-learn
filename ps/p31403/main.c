#include <stdio.h>

#ifndef BOJ
#define scanf scanf_s
#define sscanf sscanf_s
#endif

int main(void) {
    int a, b, c, i = 1;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a + b - c);

    while (i <= b) {
        i *= 10;
    }
    printf("%d\n", a * i + b - c);

    return 0;
}
