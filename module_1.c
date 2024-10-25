#include <stdio.h>

int main () {
    // Hello, World! Print
    printf("Hello, World! \n"); // Print Hello, World!

    // Variable
    int age = 18; 
    age = 17; 
    char star = '*'; 
    float pi = 3.14; 

    /*
    integer constants = 1,2,3,0,-1,-2, .....
    real constants = 1.0,2.0,3.14,-24 ....
    Character contants = 'a','b','A','#','&'
    */

   // output
   // integer
   printf("%d \n", age); 
   // real
   printf("%f \n", pi);
   // character
   printf("%c \n", star);

   // input
   int hight;
   printf("enter your hight: "); 
   scanf("%d", &hight);
   printf("Your Hight is %d \n", hight); 

   // write a program to calculate area of a square?
   int areaSquare;
   printf("Enter side: ");
   scanf("%d", &areaSquare);
   printf("Area of Square: %d \n", areaSquare*areaSquare);

   // write a program to calculate area of circle
   float areaCircle;
   printf("Enter radius: ");
   scanf("%f", &areaCircle);
   float areaOfCircle = 2*3.14*areaCircle;
   printf("%f \n", areaOfCircle);

   // data types
   int num1 = 10; // %d or %i -> integer
   float num2 = 20.9999; // %f -> float
   double num3 = 30; // %lf -> double
   char ch = 'A'; // %c -> character
   int name = "Hello"; // %s -> string
    printf("%d \n", num1);
    printf("%f \n", num2);
    printf("%lf \n", num3);
    printf("%c \n", ch);
    printf("%s \n", name);

   
   return 0;
}