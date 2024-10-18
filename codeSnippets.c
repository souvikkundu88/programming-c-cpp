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
/*
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
*/

/*Write a C program that asks the user for a number and prints whether it's positive, negative, or zero
Use if else
*/

// psuedocode
// create the main function
// declare int variable num to store input from user
// ask user for input
// use if else to check if the input is positive or negative or zero

// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter a number:");
//     scanf("%d", &num);
//     if(num == 0) {
//         printf("Number %d is a zero\n", num);
//     }
//     else if (num > 0) {
//         printf("Number %d is a positive\n", num);
//     }
//     else {
//         printf("Number %d is a negative\n", num);
//     }
//     return 0;
// }

// Challenge: Write a C program that does the following:

// Asks the user for a positive integer n.
// Prints all the numbers from 1 to n.
// For each number, it prints whether the number is "even" or "odd."

// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter a positive integer number: ");
//     scanf("%d", &num);
//     printf("printing all even and odd numbers\n");
//     for(int i=1; i<=num; i++) {
//         if(i % 2 == 0) {
//             printf("even number %d\n", i);
//         } else if(i %2 != 0){
//             printf("odd number %d\n", i);
//         }
//     }    
//     return 0;
// }

// using ?:

// #include <stdio.h>
// int main() {
//     int num;
//     printf("enter a positive integer number: ");
//     scanf("%d", &num);
//     printf("printing all even and odd numbers\n");
//     for(int i=1; i<=num; i++) {
//         printf("%s number %d\n",(i % 2 == 0) ? "even" : "odd", i);
//     }
//     return 0;
// }

// Break and Continue 
//Write a C program that:
// Declares an array of integers.
// Uses a for loop to iterate through the array.
// Prints all the numbers in the array that are divisible by 3.
// If it encounters a number greater than 50, it stops processing the array.
// This challenge combines both break and continue within the same loop.

// #include <stdio.h>
// int main() {
//     int numbers[] = {12, 4, 33, 67, 21, 55, 18, 9};

//     printf("Numbers divisible by 3 (but not greater than 50):\n");
//     for (int i = 0; i < 8; i++) {
//         // Your code here
//         if (numbers[i] > 50) {
//             break;
//         } else if(numbers[i] % 3 != 0) {
//             continue;
//         } else if(numbers[i] % 3 == 0) {
//             printf("%d\n", numbers[i]); 
//         }
//     }
//     return 0;
// }

// Write a C program that:

// Asks the user to enter a number between 1 and 7.
// Uses a switch statement to print the corresponding day of the week (1 = Monday, 2 = Tuesday, ..., 7 = Sunday).
// If the user enters a number outside the range 1-7, it prints an error message.

// #include <stdio.h>
// int main() {
//     int userInput;
//     printf("enter a number between 1 and 7\n");
//     scanf("%d", &userInput);

//     switch(userInput) {
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wedneday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//         default:
//             printf("Error");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//   int i = 6; // Notice i is initialized to 6
//   do {
//     printf("%d ", i);
//     i++;
//   } while (i <= 5);
//   printf("\n"); // Output: 6
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int i = 1;
//   while (i <= 5) {
//     printf("%d ", i);
//     i++;
//   }
//   printf("\n"); // Output: 1 2 3 4 5
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   for (int i = 1; i <= 5; i++) {
//     printf("%d ", i);
//   }
//   printf("\n"); // Output: 1 2 3 4 5
//   return 0;
// }

// #include <stdio.h>
// int main() {
//     for (int i = 0; i < 10; i++) {
//   if (i == 5) {
//     break; 
//   }
//   printf("%d ", i);
// }
// }
// Output: 0 1 2 3 4

// #include<stdio.h>

// int main() {
//     for (int i = 0; i < 5; i++) {
//   if (i == 2) {
//     continue; 
//   }
//   printf("%d ", i);
// }
// // Output: 0 1 3 4
// }

// #include<stdio.h>

// int main() {
//     int day = 3;
// switch (day) {
//   case 1:
//     printf("Monday\n");
//     break;
//   case 2:
//     printf("Tuesday\n");
//     break;
//   case 3:
//     printf("Wednesday\n");
//     break;
//   default:
//     printf("Other day\n");
// }
// // Output: Wednesday
// }

// #include<stdio.h>

// int main() {
//     int a = 10, b = 20;
//     int max = (a > b) ? a : b; // max will be 20
//     printf("%d", max);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//   int rows = 5; // You can change this to control the number of rows

//   for (int i = 1; i <= rows; ++i) {
//     // Print spaces
//     for (int j = 1; j <= rows - i; ++j) {
//       printf("  ");
//     }

//     // Print zeros
//     for (int j = 1; j <= 2 * i - 1; ++j) {
//       printf("0 ");
//     }

//     printf("\n");
//   }

//   return 0;
// }

// functions

// Write a C function called is_even that takes an integer as an argument and returns 1 if the integer is even, and 0 if it is odd.

// #include <stdio.h>

// int is_even(int userInput) {
//   if (userInput == 0) {
//     printf("%d is a zero", userInput);
//     return 1;
//   } else if(userInput % 2 == 0 && userInput > 0) {
//       printf("%d is even and a positive integer", userInput);
//       return 0;
//     } else if(userInput % 2 == 0 && userInput < 0) {
//       printf("%d is even and a negative integer", userInput);
//       return 0;
//     } else if (userInput % 2 != 0 && userInput > 0) {
//       printf("%d is odd and a positive integer", userInput);
//       return 1;
//     } else {
//       printf("%d is odd and a negative integer", userInput);
//       return 1;
//     }
// }

// int main() {
//   int num;
//   printf("enter an integer\n");
//   scanf("%d", &num);
//   is_even(num);
// }

// optimizing the previous

// #include <stdio.h>

// int is_even(int userInput) {
//   if (userInput == 0) {
//     printf("%d is zero\n", userInput);
//     return 1; 
//   }

//   if (userInput % 2 == 0) { 
//     printf("%d is even and ", userInput);
//   } else {
//     printf("%d is odd and ", userInput);
//   }

//   if (userInput > 0) {
//     printf("a positive integer\n");
//   } else {
//     printf("a negative integer\n");
//   }
//   // Simplified even/odd check:
//   return (userInput % 2 == 0); 
// }

// int main() {
//   int num;
//   printf("Enter an integer: ");
//   scanf("%d", &num);
//   is_even(num);
//   return 0; // It's good practice to return 0 from main
// }

#include <stdio.h>

void fibonacci(int n) {
    // First two numbers of Fibonacci
    long long first = 0, second = 1, next;
    
    printf("Fibonacci Series up to %d numbers:\n", n);
    
    // Print the first number if n is at least 1
    if (n >= 1)
        printf("%lld ", first);
    
    // Print the second number if n is at least 2
    if (n >= 2)
        printf("%lld ", second);

    // Generate the rest of the series
    for(int i = 3; i <= n; i++) {
        next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
    }
    
    printf("\n");
}

int main() {
    int numTerms;
    
    // Ask user for number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    
    // Ensure the number of terms is positive
    if (numTerms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(numTerms);
    }
    return 0;
}