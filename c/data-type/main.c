#include <stdio.h>
#include "../cs50/cs50.h"

int main(void) {
    int age = get_int("How old are you?: ");
    int days = age * 365;
    printf("You are at least %i days old.\n", days);

    float price = get_float("What's the price?: ");
    printf("Your total is %.2f.\n", price * 1.0625); // Massachusetts Sales and use tax: 6.25%

    int n = get_int("n: ");
    if (n % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    char c = get_char("Do you agree? (Y/N): ");
    if (c == 'Y' || c == 'y') {
        printf("Agreed.\n");
    } else if (c == 'N' || c == 'n') {
        printf("Not agreed.\n");
    }

    return 0;
}
