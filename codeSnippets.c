/******************************************/
// input arguments
// #include <stdio.h>
// void writeMessage(char name[]) {
//     printf("Hello, %s\n", name);
// }
// int main(void) {
//     writeMessage("Dave");
//     writeMessage("Victoria");
// }

// void writeMessage(char name[], int age) {
//     printf("hello, you are %s, and your age is %d\n", name, age);
// }

// int main(void) {
//     writeMessage("Dave", 34);
//     writeMessage("SK", 36);
//     return 0;
// }

/******************************************/

// fibonacci series in c
/*
#include <stdio.h>

int Fibonacci(int n) {
    if(n == 0) return 0;
    else if (n == 1) return 1;
    else return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(void) {
    int n = 10;
    int Fn = Fibonacci(n);
    printf("Fibonacci(%d) = %d", n, Fn);
    return 0;
}
*/

/*
Write a C program that prints all even numbers between 1 and 20 using a for loop.
*/
/*
#include <stdio.h>

int main() {
    int i;
    for (i=2; i<21; i+=2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
*/

/*
Write a program that asks the user for a positive integer and keeps asking until the user enters 0. After the user enters 0, the program should display the sum of all the positive integers entered.
*/

#include <stdio.h>

int main() {
    int sum = 0;
    int num;

    while(num!=0) {
        printf("Enter a positive integer (or 0 to quit):");
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("The sum of the entered numbers is: %d\n", sum);
    return 0;
}
