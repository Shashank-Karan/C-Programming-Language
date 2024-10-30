#include <stdio.h>
#include <math.h>

int main () {
    printf("Hello, World! \n");

    // write a program to check if a given number is armstrong number or not.
    int num1;
    printf("enter a number: ");
    scanf("%d", &num1);
    int temp = num1;
    int sum = 0;
    while (num1 > 0) {
        int rem = num1 % 10;
        sum += pow(rem, 3);
        num1 /= 10;
    }
    if (temp == sum) {
        printf("Armstrong number\n");
    } else {
        printf("Not an armstrong number\n");
    }
    
    // write a program to check if the given number is a natural number or not.
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Natural number\n");
    } else {
        printf("Not a natural number\n");
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

    return 0;
}