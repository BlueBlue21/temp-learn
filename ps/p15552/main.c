#include <stdio.h>

#ifndef BOJ
#define scanf scanf_s
#endif

int main(void) {
    int a = 0;
    scanf("%i", &a);

    for (int i = 0; i < a; i++) {
        int b, c = 0;
        scanf("%i %i", &b, &c);
        printf("%i\n", b + c);
    }

    return 0;
}
