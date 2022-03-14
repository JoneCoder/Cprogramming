#include <stdio.h>

int main()
{
    /*double mark;

    printf("Enter your mark: ");
    scanf("%lf", &mark);
    */

    //Big > Small

    /*
    mark        Grad GPA
    80 - 100 ->   A+   5
    70 - 79  ->   A    4
    60 - 69  ->   A-   3.5
    50 - 59  ->   B   3
    40 - 49  ->   C   2.5
    33 - 39  ->   D  2 
    0  - 33  ->   F  0
    */

    /*if(80 <= mark){
        printf("The Student get A+\n");
    }
    else if(70 <= mark && 79 >= mark){
        printf("The Student get A\n");
    }
    else if(60 <= mark && 69 >= mark){
        printf("The Student get A-\n");
    }
    else if(50 <= mark && 59 >= mark){
        printf("The Student get B\n");
    }
    else if(40 <= mark && 49 >= mark){
        printf("The Student get C\n");
    }
    else if(33 <= mark && 39 >= mark){
        printf("The Student get D\n");
    }
    else{
        printf("The Student get F\n");
    }
    */


   int number, remaider;

   printf("Enter a number: ");
   scanf("%d", &number);

   remaider = number % 2;
    /*
   2|12|6
     ---
      0
    */

   if(remaider == 0){
       printf("The number is even\n");
   }else{
       printf("The number is odd\n");
   }


    
    
    return 0;
}