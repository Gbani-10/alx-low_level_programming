#include "holberton.h"
/**
 *print_number - funtion to print integer
 *@n: integer for the parameter
 *
 *Return: always 0 (success)
 */
void print_number(int n)
{
   if (n < 0)
     {
      _putchar('-');
       n = -n;
   }

   if (n == 0)
     {
     _putchar('0');
     }
   if (n/10)
     {
      printnumber(n/10);
     }
  _putchar(n%10 + '0');
}
