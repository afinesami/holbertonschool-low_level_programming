#include "holberton.h"
#include <stdio.h>
/**
 *  _pow_recursion - calculates value of x raised to the power of y
 * @x: given number
 * @y: exponent
 * Return: value of x raised to the power of y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
