#include <stdio.h>

int main(void) {
    int age;

    printf ("Enter your age: ");
    scanf ("%d", &age);

    if (age >= 18) {
        printf("You are %d and you are eligible to vote\n", age);
    } else {
        printf("You are %d and you are not eligible to vote\n", age);
    }

    return 0;
}