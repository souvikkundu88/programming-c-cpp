/******************************************/
// input arguments
#include <stdio.h>
// void writeMessage(char name[]) {
//     printf("Hello, %s\n", name);
// }
// int main(void) {
//     writeMessage("Dave");
//     writeMessage("Victoria");
// }

void writeMessage(char name[], int age) {
    printf("hello, you are %s, and your age is %d\n", name, age);
}

int main(void) {
    writeMessage("Dave", 34);
    writeMessage("SK", 36);
    return 0;
}

/******************************************/