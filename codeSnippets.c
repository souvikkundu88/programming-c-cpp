// input arguments

#include <stdio.h>

void writeMessage(char name[]) {
    printf("Hello, %s\n", name);
}

int main(void) {
    writeMessage("Dave");
    writeMessage("Victoria");
}