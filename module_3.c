#include <stdio.h>
#include <math.h>

int main () {
    printf("Hello, World! \n");

    // Conditional Statements
    // if statement
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are eligible for voting\n");
    } else {
        printf("You are not eligible for voting\n");
    }
}