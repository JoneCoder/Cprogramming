#include <stdio.h>

int main()
{
    /*
    int n = 1;
    printf("%d\n", n);

    n = n + 1; // n = 2
    printf("%d\n", n);

    n = n + 1; // n = 3
    printf("%d\n", n);
    */

   /*int n = 1;

   while (n <= 100)
   {
       printf("%d\n", n);

       n++; // n = n -1  n++ => n = n + 1

       if(n > 10){
           break;
       }
       
   }
   */

  int n = 1;

  while (n <= 100)
  {
      n++;

      if(n % 2 == 0){
          continue;
      }
      
      printf("%d\n", n);
  }
  
   
    return 0;
}