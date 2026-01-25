#include <stdio.h>

#ifndef BOJ
#define scanf scanf_s
#define sscanf sscanf_s
#endif

int main(void) {
    int n = 0;
    scanf("%i", &n);

    char m[n];
    scanf("%s", &m);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += m[i] - '0';
    }
    printf("%i\n", sum);

    return 0;
}
