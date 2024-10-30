#include <stdio.h>
#include <math.h>
#include <string.h>

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

    // else if
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks>30 && marks<100) {
        printf("You have passed the exam\n");
    } else if (marks<30 && marks>0) {
        printf("You have failed the exam try again\n");
    } else {
        printf("Invalid marks\n");
    }


    // ternary operator
    // Condition ? doSomething if TRUE : doSomething if FALSE;
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    (num1%2 == 0) ? printf("Even number\n") : printf("Odd number\n");

    int a = 10, b = 20, c;
    c = (a > b) ? a : b; 
    printf("Largest number is: %d\n", c);

    // switch case
    int day;
    printf("Enter a number between 1-7: ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("friday\n"); break;
        case 6: printf("saturday\n"); break;
        case 7: printf("Sunday\n"); break;
    }

    // nested switch case
    int num2;
    printf("Enter a number: ");
    scanf("%d", &num2);
    switch (num2) {
        case 1: 
            printf("You are in case 1\n");
            switch (num2) {
                case 1: printf("You are in nested case 1\n"); break;
                case 2: printf("You are in nested case 2\n"); break;
            }
            break;
        case 2: printf("You are in case 2\n"); break;
    }

    // nested if and if else
    int num3;
    printf("Enter a number: ");
    scanf("%d", &num3);
    if (num3 > 0) {
        if (num3%2 == 0) {
            printf("Even number\n");
        } else {
            printf("Odd number\n");
        }
    } else {
        printf("Invalid number\n");
    }
    
    return 0;
}