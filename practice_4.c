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
    // while loop
    // do while loop
}