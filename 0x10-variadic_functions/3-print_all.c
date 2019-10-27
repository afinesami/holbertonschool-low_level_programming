#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_i - prints int
 * @list: arguement of list
 * @s: seperator
 * Return: none
 */
void print_i(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}
/**
 * print_c - prints char
 * @list: arguement char
 * @sep: seperator
 */
void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}
/**
 * print_s - prints string
 * @sep: seperator
 * @list: list to print
 * Return: none
 */
void print_s(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sep, s);
}
/**
 * print_f - prints floats
 * @sep: float to print
 * @list: next arguement of list to print
 * Return: none
 */
void print_f(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}
/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep;
	int i, j;
	fm_t fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(list, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(list, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
