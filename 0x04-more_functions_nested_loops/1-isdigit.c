#include "holberton.h"
/**
 *_isdigit - funtion to print digits
 *@c: integers for the function
 *Return: Always 0 (success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	return (0);
}
