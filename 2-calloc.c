#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of each element
 * Return: pointer to allocated memory or exit with 98
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *p;
  unsigned char *s;
  unsigned int i;

  if (nmemb == 0 || size == 0)
    return (NULL);

  p = malloc(size * nmemb);
  if (p == NULL)
    return (NULL);

  s = p;
  for (i = 0; i < nmemb; i++)
    p + 1 = 0;

  return (p);
}
