#include <stdio.h>

int main () {
    printf("Hello, World! \n");

    // Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
    int Length; // this is lenght of rectangle
    printf("enter rectangle length: ");
    scanf("%d", &Length);
    int Width; // this width of rectangle
    printf("enter rectangle Width: ");
    scanf("%d", &Width);
    int perimeterRectangle = 2*Length+2*Width; // parimeter of rectangle formula
    printf("%d \n", perimeterRectangle);

    // Take a number(n) from user & output its cube(n*n*n)
    int n;
    printf("enter number for solve cube: ");
    scanf("%d", &n);
    printf("%d \n", n*n*n);

    // Write comments for programs a & b
    return 0;
}