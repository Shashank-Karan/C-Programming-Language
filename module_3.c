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

    // write a program to check if a student passed or falied
    int marks2;
    printf("Enter your marks: ");
    scanf("%d", &marks2);
    if (marks2 >= 30 && marks2 <=100) {
        printf("you have passed the exam\n");
    } else if (marks2 <=30 && marks2 >= 0) {
        printf("you have failed the exam\n");
    } else {
        printf("invalid marks\n");
    }

    // write a program to give grades to a student
    // marks < 30 is F
    // 30 <= marks < 40 is E
    // 40 <= marks < 50 is D
    // 50 <= marks < 60 is C
    // 60 <= marks < 70 is B
    // 70 <= marks < 100 is A
    int marks3;
    printf("Enter your marks: ");
    scanf("%d", &marks3);
    if (marks3 >= 0 && marks3 < 30) {
        printf("Grade F\n");
    } else if (marks3 >= 30 && marks3 < 40) {
        printf("Grade E\n");
    } else if (marks3 >= 40 && marks3 < 50) {
        printf("grade D\n");
    } else if (marks3 >= 50 && marks3 < 60) {
        printf("grade C\n");
    } else if (marks3 >= 60 && marks3 < 70) {
        printf("grade B\n");
    } else if (marks3 >= 70 && marks3 <= 100) {
        printf("grade A\n");
    } else {
        printf("invalid marks\n");
    }

    // write a program to find if a character entered by user is upper case or not
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper case character\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lower case character \n");
    } else {
        printf("Invalid character\n");
    }
    return 0;
}