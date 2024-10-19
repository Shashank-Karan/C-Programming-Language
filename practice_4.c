#include <stdio.h>
#include <math.h>

int main () {
    printf("Hello, World!\n");

    //  Q. print the numbers from 0 to 10
    // for loop
    for (int i = 0; i <= 10; i = i + 1) {
        printf("%d\n", i);
    }
    // while loop
    int j = 0;
    while (j <= 10) {
        printf("%d\n",j);
        j = j + 1;
    }
    // do while loop
    int k = 0;
    do {
        printf("%d\n", k);
        k = k + 1;
    } while(k <= 10);
    // Q. print the numbers from 0 to n, if n is given by user
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    // for loop
    for (int i = 0; i <= num; i = i + 1) {
        printf("%d\n", i);
    }
    // while loop
    int j = 0;
    while (j <= num) {
        printf("%d\n", j);
        j = j + 1;
    }
    // do while loop
    // print the sum of first n natural numbers. n = 4
    // for loop
    // while loop
    // do while loop
    // reverse the number
    // for loop
    // while loop
    // do while loop
    // print the table a number input by user
    // for loop
    // while loop
    // do while loop
    // keep taking numbers as input from user until user enters an odd number.
    // for loop
    // while loop
    // do while loop
}