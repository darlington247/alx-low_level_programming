#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main()
{
   unsigned long long n, first = 0, second = 1, next, c;

   printf("Enter the number of terms\n");
   scanf("%d",&n);

   printf("First %d terms of Fibonacci series are :-\n",n);

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }

   return 0;
}
