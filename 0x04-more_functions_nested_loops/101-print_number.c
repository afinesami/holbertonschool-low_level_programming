#include "holberton.h"
/**
* print_number - print numbers out
* @n: takes in an integer
*/
void print_number(int n)
{
	int i, j, div;
	int x = n;

	div = 10;
	if (n < 0)
	{
		x = x * -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 1; x > 0; i++)
		{
			x /= 10;
		}
		for (j = 0; j < i - 1; j++)
		{
			div *= 10;
		while (div >= 1)
		{
			_putchar(n / div + '0');
			n = n % div;
			div = div / 10;
		}
		}
	}
}
