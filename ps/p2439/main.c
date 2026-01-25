#include <stdio.h>

#ifndef BOJ
#define scanf scanf_s
#endif

int main(void) {
    int n = 0;
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
