#include <stdio.h>
#include <math.h>

int main () {
    printf("Hello, World!\n");

    /*

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
    for (int var = 0; var <= num; var = var + 1) {
        printf("%d\n", var);
    }
    // while loop
    int var2 = 0;
    while (var2 <= num) {
        printf("%d\n", var2);
        var2 = var2 + 1;
    }
    // do while loop
    int var3 = 0;
    do {
        printf("%d\n", var3);
        var3 = var3 + 1;
    } while(var3 <= num);
    
    // Q. print the sum of first n natural numbers
    int num2;
    printf("enter the number for sum: ");
    scanf("%d", &num2);
    int sum = 0;
    // for loop
    for (int var4 = num2; var4 >= 0; var4 = var4 - 1) {
        sum = sum + var4;
    } printf("%d\n", sum);
    // while loop
    sum = 0;
    int var5 = num2;
    while (var5 >= 0) {
        sum = sum + var5;
        var5 = var5 - 1;
    } printf("%d\n", sum);
    // do while loop
    sum = 0;
    int var6 = num2;
    do {
        sum = sum + var6;
        var6 = var6 - 1;
    } while (var6 >= 0);
    printf("%d\n", sum);

    // Q. reverse the number
    int num3;
    printf("enter the number for sum: ");
    scanf("%d", &num3);
    // for loop
    for (int var7 = num3; var7 >= 0; var7 = var7 - 1) {
        printf("%d\n", var7);
    }
    // while loop
    int var8 = num3;
    while (var8 >= 0) {
        printf("%d\n", var8);
        var8 = var8 - 1;
    }
    // do while loop
    int var9 = num3;
    do {
        printf("%d\n", var9);
        var9 = var9 - 1;
    } while (var9 >= 0);

    // Q. print the table a number input by user
    int num4;
    printf("enter the number for table: ");
    scanf("%d", &num4);
    // for loop
    for (int var10 = 0; var10 <= 10; var10 = var10 + 1) {
        printf("%d x %d = %d\n", num4, var10, num4 * var10);
    }
    // while loop
    int var11 = 0;
    while (var11 <= 10) {
        printf("%d x %d = %d\n", num4, var11, num4 * var11);
        var11 = var11 + 1;
    }
    // do while loop
    int var12 = 0;
    do {
        printf("%d\n", num4 * var12);
        var12 = var12 + 1;
    } while (var12 <= 10);

    // Q. keep taking numbers as input from user until user enters an odd number.
    // for loop
    for (int num5; ;) {
        printf("Enter a number: ");
        scanf("%d", &num5);
        if (num5 % 2 != 0) {
            break;
        }
    } printf("You entered an odd number\n");
    // while loop
    int num6;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num6);
        if (num6 % 2 == 0) {
            break;
        }
    } printf("You entered an even number\n");
    // do while loop
    int num7;
    do {
        printf("Enter a number: ");
        scanf("%d", &num7);
        if (num7 * 2 == 12) {
            break;
        }
    } while (1);
    printf("You entered multiple of 12\n");

    // Q. Keep taking numbers as input from user untill user enters a nunber which is multiple of 7. in for loop multiple of 7, in while loop multiple of 5, in do while loop multiple of 3.
    // for loop
    for (int num8; ;) {
        printf("Enter a number to find multiple of 7: ");
        scanf("%d", &num8);
        if (num8 % 7 == 0) {
            break;
        } printf("Not a multiple of 7\n");
    } printf("You entered a multiple of 7\n");
    // while loop
    int num9;
    while (1) {
        printf("enter a number to find multiple of 5: ");
        scanf("%d", &num9);
        if (num9 % 5 == 0) {
            break;
        } printf("Not a multiple of 5\n");
    } printf("You entered a multiple of 5\n");
    // do while loop
    int num10;
    do { 
        printf("Enter a number to find multiple of 3: ");
        scanf("%d", &num10);
        if (num10 % 3 == 0) {
            break;
        } printf("Not a multiple of 3\n");
    } while (1);
    printf("You entered a multiple of 3\n");

    // Q. print all numbers from 1 to 10 except for 6.
    for (int var13 = 1; var13 <= 10; var13 = var13 + 1) {
        if (var13 == 6) {
            continue;
        } printf("%d\n", var13);
    }

    // Q. print all the odd numbers from 5 to 50.
    for (int var14 = 5; var14 <= 50; var14 = var14 + 1) {
        if (var14 % 2 == 0) {
            continue;
        } printf("%d\n", var14);
    }

    // Q. print the factorial of a number
    int num15;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num15);
    int fact = 1; 
    for (int var15 = 1; var15 <= num15; var15 = var15 + 1) {
        fact = fact * var15;
    } printf("Factorial of %d is %d\n", num15, fact);

    // Q. Print reverse of the table for a number input by user.
    int num16;
    printf("Enter a number to find reverse table: ");
    scanf("%d", &num16);
    for (int var16 = 10; var16 >= 1; var16 = var16 -1) {
        printf("%d x %d = %d\n", num16, var16, num16 * var16);
    }

    // Q. Calculate the sum of all numbers between 5 and 50. (including 5 and 50)
    int sum2 = 0;
    for (int var17 = 5; var17 <= 50; var17 = var17 + 1) {
        sum2 = sum2 + var17;
    } printf("%d\n", sum2);

    */

    // Q. Search on what a "nested loop" is & print this pattern using it.
    //      *****
    //      *****
    //      *****
    //      *****
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
    // write a program to check if a number is prime or not.

    // write a program to print prime numbers in a range.)
    return 0;
}