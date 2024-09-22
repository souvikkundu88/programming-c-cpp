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

