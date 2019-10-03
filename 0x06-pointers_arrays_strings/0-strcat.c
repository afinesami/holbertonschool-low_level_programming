#include "holberton.h"
#include "strlen.c"
/**
 * _strncat - concatenates two strings, up to a specified number of bytes.
 * @dest: The string added to.
 * @src: The string added onto the end of @dest.
 * @n: The number of bytes to add from @src.
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = _strlen(dest), j = 0; j < _strlen(src) && j < n; j++)
		dest[i + j] = src[j];
	return (dest);
}
