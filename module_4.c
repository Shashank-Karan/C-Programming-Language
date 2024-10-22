#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hello, World!\n");

    // Loop Control Instructions
    // for loop
    // for (initialization (starting); condition; increment/decrement (Ending))
    // i = itatator
    for (int i = 0; i <= 5; i = i + 1)
    {
        printf("%d\n", i);
        printf("Hello, World!\n");
    }

    // print the numbers from 0 to 10
    for (int i = 0; i <= 10; i = i + 1)
    {
        printf("%d\n", i);
    }

    // increment operator
    // i++ , ++i
    // i++ -> post increment
    // ++i -> pre increment
    int i = 0;
    printf("%d\n", i++); // use the value of i and then increment
    printf("%d\n", i);   // increment the value of i

    printf("%d\n", ++i); // increment the value of i and then use it
    printf("%d\n", i);   // increment the value of i

    // decrement operator
    // i-- , --i
    // i-- -> post decrement
    // --i -> pre decrement
    int j = 0;
    printf("%d\n", j--); // use the value of j and then decrement
    printf("%d\n", j);   // decrement the value of j

    printf("%d\n", --j); // decrement the value of j and then use it
    printf("%d\n", j);   // decrement the value of j

    // Loop counter can be float or even character
    for (float k = 0.0; k <= 5.0; k = k + 0.5)
    {
        printf("%f\n", k);
    }

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c\n", ch);
    }

    for (char ch2 = 'a'; ch2 <= 'z'; ch2++)
    {
        printf("%c\n", ch2);
    }

    // // infinite loop
    // // for (;;) {
    // for (int i = 0; ; i++) {
    //     printf("%d\n", i);
    // }

    // while loop
    // while (condition) { }
    int q = 0; // initialization
    while (q <= 5)
    {                              // condition
        printf("Hello, World!\n"); // body
        q = q + 1;                 // increment
    } // ending

    // print the numbers from 0 to n, if n is given by user n = 4
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // while loop
    int r = 0;
    while (r <= n)
    {
        printf("%d\n", r);
        r = r + 1;
    }

    // for loop
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }

    // do while loop
    // do { } while (condition);
    int s = 0; // initialization
    do
    {                      // body
        printf("%d\n", s); // body
        s = s + 1;         // increment
    } while (s <= n); // condition

    // continue statement
    // skip the current iteration and move to the next iteration
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i = i + 1) {
        if (i == 3) {
            continue;
        } printf("%d\n", i);
    }
    return 0;
}