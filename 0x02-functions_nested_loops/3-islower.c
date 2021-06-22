#include "holberton.h"
/**
 * _islower - funtion that checks for lowercase
 * @c:  is the int that will use for the argument of the function
 *Return: always 0 (success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	{
return (1);
	}
else
return (0);
}
