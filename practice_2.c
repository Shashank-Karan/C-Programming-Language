#include <stdio.h>
#include <math.h>

int main () {
    printf("Hello, World! \n");

    // Write a program to print the average of 3 numbers.
    int num1;
    printf("Enter first number: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter second number: ");
    scanf("%d", &num2);
    int num3;
    printf("Enter third number: ");
    scanf("%d", &num3);
    int average = (num1 + num2 + num2) / 3;
    printf("%d \n", average);

    // Write a program to check if given character is digit or not.
    int character;
    printf("Enter a character: ");
    scanf("%d", &character);
    printf("%d \n", character >= 0 && character <= 100);
}