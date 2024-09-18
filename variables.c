#include <stdio.h>

int main(void) {
    
    // int age = 30;
    // float pi = 3.14159;
    // char initial = 'J';

    // printf("Hello, %c!\n", initial);
    // printf("You are %d years old.\n", age);
    // printf("The value of pi is approximately %.2f\n", pi);

    int age;
    char name[50]; // an array to store  user names
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age); // get the user's age
    
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}

