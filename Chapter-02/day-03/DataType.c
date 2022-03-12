#include <stdio.h>

int main ()
{
    /*
    double a, b, sum;
    a = 9.5;
    b = 8.743;

    sum = a + b;
    printf("Sum is: %lf\n", sum);
    printf("Sum is: %0.2lf", sum);
    */
   
   /*int a, b, sum;

   printf("Enter an Integer Number:");
   scanf("%d", &a);
   printf("Enter an another Integer Number:");
   scanf("%d", &b);

   sum = a + b;

   printf("Sum is: %d + %d = %d", a, b, sum);
   */

    /*char ch;
    printf("Enter the first letter of your name: ");
    //ch = getchar();
    scanf("%c", ch);

    char c = 'A';

    printf("The first letter of your name is: %c\n", ch);
    */

   int num1, num2;
   double sum, sub, mul, div;
   char sign;
   
   //Input value
   printf("Please enter a number: ");
   scanf("%d", &num1);

   printf("please enter another number: ");
   scanf("%d", &num2);

    //Operation 
   sum = num1 + num2;
   sub = num1 - num2;
   mul = num1 * num2;
   div = num1 / num2;
   
   //print
   sign = '+';
   printf("%d %c %d = %lf\n", num1, sign, num2, sum);

   sign = '-';
   printf("%d %c %d = %lf\n", num1, sign, num2, sub);

   sign = '*';
   printf("%d %c %d = %lf\n", num1, sign, num2, mul);

   sign = '/';
   printf("%d %c %d = %lf\n", num1, sign, num2, div);

   int a = 4;
   double A = 3.5;

    return 0;
}