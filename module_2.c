#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    printf("Hello, World!\n");

    // Instructions
    // Type Declaration Instructions
    int a = 22;
    int b = 7;
    int c = a + b;
    int d = 1, e;
    printf("%d\n", c);

    int x,y,z;
    x,y,z = 2;

    int oldAge = 17;
    int years = 1;
    int newAge = oldAge + years; // Assignment Instructions
    printf("%d\n", newAge);

    // Arithmetic Instructions
    int sum = 2 + 3;   // Addition
    int sub = 3 - 2;  // Subtraction
    int mul = 2 * 3; // Multiplication
    int div = 3 / 2; // Division
    int mod = 3 % 2;    // Modular Operator
    int power = pow(2, 3);
    printf("%d %d %d %d %d %d\n", sum, sub, mul, div, mod, power);

    // Type Conversion
    int num1 = 2;
    int num2 = 3;
    float result = num1 / num2;
    printf("%f\n", result);

    int num3 = (int) 1.99999;  // Type Casting
    printf("%d\n", num3);

    // Operator Precedence
    int result1 = 2 + 3 * 4;
    int result2 = (2 + 3) * 4;
    int result3 = 4 * 3 / 6 * 2;
    printf("%d %d %d\n", result1, result2, result3);

    // Associativity (for same precedence) Left to Right
    int result4 = 2 - 3 + 4;
    int result5 = 2 + 3 - 4;
    int result6 = 2 * 3 / 4;
    int result7 = 2 / 3 * 4;
    int result8 = 2 / 3 / 4;
    int result9 = 2 / 3 % 4;
    int result10 = 2 % 3 / 4;
    int result11 = 2 % 3 % 4;
    int result12 = 2 % 3 * 4;
    int result13 = 2 * 3 % 4;
    printf("%d %d %d %d %d %d %d %d %d %d\n", result4, result5, result6, result7, result8, result9, result10, result11, result12, result13);

    // control instructions
    int age = 18;
    if (age >= 18) {
        printf("You are eligible for voting\n");
    } else {
        printf("You are not eligible for voting\n");
    }

    // Operators
    // arithmetic operators
    int num4 = 2;
    int num5 = 3;
    int sum1 = num4 + num5; // addition
    int sub1 = num4 - num5; // subtraction
    int mul1 = num4 * num5; // multiplication
    int div1 = num4 / num5; // division
    int mod1 = num4 % num5; // modulus
    printf("%d %d %d %d %d\n", sum1, sub1, mul1, div1, mod1);

    // relational operators
    printf("%d\n", num4 == num5); // false, equal to
    printf("%d\n", num4 != num5); // true, not equal to
    printf("%d\n", num4 > num5); // false, greater than
    printf("%d\n", num4 < num5); // true, less than
    printf("%d\n", num4 >= num5); // false, greater than or equal to
    printf("%d\n", num4 <= num5); // true, less than or equal to

    // logical operators
    int num6 = 2;
    int num7 = 3;
    printf("%d\n", num6 && num7); // true, logical AND, both conditions are true
    printf("%d\n", num6 || num7); // true, logical OR, any one condition is true
    printf("%d\n", !num6); // false, logical NOT, negation of condition

    /*
    // logic gates
    int num8 = 2;
    int num9 = 3;
    printf("%d\n", num8 & num9); // 2, bitwise AND, 
    printf("%d\n", num8 | num9); // 3, bitwise OR
    printf("%d\n", num8 ^ num9); // 1, bitwise XOR
    printf("%d\n", ~num8); // -3, bitwise NOT
    printf("%d\n", num8 << 1); // 4, left shift
    printf("%d\n", num8 >> 1); // 1, right shift
    */

   // assignment operators
    int num10 = 2;
    int num11 = 3;
    num10 += num11; // num10 = num10 + num11
    printf("%d\n", num10);

    // Print 1(true) or 0(false) for the following statements:
    // a = if it's sunday & it's snowing -> true
    // b = if it's monday & it's raining -> true
    // c = if a number is greater than 9 & less then 100 -> true
    // d = (2 digit number)
    int sunday = 1;
    int snowing = 1;
    printf("%d\n", sunday && snowing);

    int monday = 1;
    int raining = 1;
    printf("%d\n", monday && raining);

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d\n", number > 9 && number < 100);

    int twoDigitNumber;
    printf("Enter a two digit number: ");
    scanf("%d", &twoDigitNumber);
    printf("%d\n", twoDigitNumber > 9 && twoDigitNumber < 100);
    
    return 0;
}