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
    int average = (num1 + num2 + num3) / 3;
    printf("%d \n", average);

    // Write a program to check if given character is digit or not.
    int character;
    printf("Enter a Number: ");
    scanf("%d", &character);
    printf("%d \n", character >= 0 && character <= 100);

    // Write a program to print the smallest number of two.
    int number1;
    printf("Enter first number: ");
    scanf("%d", &number1);
    int number2;
    printf("Enter second number: ");
    scanf("%d", &number2);
    printf("%d \n", number1 < number2);

    // write a program to check if a number is divisible by 2 or not
    int num12;
    printf("Enter a number: ");
    scanf("%d", &num12);
    printf("%d\n", num12 % 2 == 0);

    return 0;
}