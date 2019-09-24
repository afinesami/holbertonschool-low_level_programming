#include "holberton.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
}
