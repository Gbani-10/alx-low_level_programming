#include <stdio.h>
/**
* C program to print
* printFibonacciNumbers: first 50 Fibonacci numbers
*@n: print integers
* Return: Always 0.
*/
void printFibonacciNumbers(int n)
{
int f1 = 0, f2 = 1, i;
if (n < 1)
return;
printf("%d ", f1);
for (i = 1; i < n; i++)
  {
printf("%d ", f2);
int next = f1 + f2;
 f1 = f2;
 f2 = next;
  }
}
#include <stdio.h>
/**
* C program to print
*first 50 Fibonacci numbers
*
* Return: Always 0.
*/
void printFibonacciNumbers(int n)
{
        int f1 = 0, f2 = 1, i;

        if (n < 1)
                return;
        printf("%d ", f1);
        for (i = 1; i < n; i++)
        {
                printf("%d ", f2);
                int next = f1 + f2;
                f1 = f2;
                f2 = next;
        }
}

int main()
{
        printFibonacciNumbers(50);
        return 0;
}int main()
{
printFibonacciNumbers(50);
return 0;
}
