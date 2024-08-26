#include <stdio.h>

int main(void) {
    int age;

    printf ("Enter your age: ");
    scanf ("%d", &age);

    if (age >= 18) {
        printf("Your and your are eligible to vote\n");
    } else {
        printf(" You are not eligible to vote");
    }

    return 0;
}