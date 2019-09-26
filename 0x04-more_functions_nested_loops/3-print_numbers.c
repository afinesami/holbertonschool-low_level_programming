#include "holberton.h"

/**
* print_numbers - function that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	_putchar(c);
	_putchar('\n');
}
