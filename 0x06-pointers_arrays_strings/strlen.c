/**
 * _strlen - provides string length.
 * @s: The string in question.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
  unsigned int i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}
