#include "holberton.h"

/**
* print_last_digit - a function that prints the last digit
* of a number.
*
* @n: input number as an integer.
*
* Returns the value of the last digit.
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	_putchar(-l + 48);
	return (-l);
	}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
