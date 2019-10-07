#include "holberton.h"
/**
* _strchr - locates a character in a string.
* Description: returns a point to the first occurance of the char c.
* @s: string to be searched through.
* @c: charater to be looked for.
* Return: returns s or returns NULL.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
	return (NULL);
}
