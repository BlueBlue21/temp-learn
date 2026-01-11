#include <stdio.h>
#include "../cs50/cs50.h"

void bark(int n);
int get_positive_number(string questions);

int main(void) {
    bark(3);

    int n = get_positive_number("Block size: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

void bark(int n) {
    for (int i = 0; i < n; i++) {
        printf("Bark!\n");
    }
}

int get_positive_number(string questions) {
    int n;
    do {
        n = get_int("%s", questions);
    } while(n < 1);
    return n;
}
