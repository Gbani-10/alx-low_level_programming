#include "holberton.h"
/**
 *_isupper - function checks for uppercase character
 * @c: arguments to be declared in the function
 *Return: Always 0 (success)
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
