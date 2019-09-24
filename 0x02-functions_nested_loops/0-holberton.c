#include "holberton.h"

int main(void)
{
	holberton();
	return (0);
}

void holberton(void)
{
	char h[] = "Holberton\n";
	int i;
	for (i=0; h[i] != '\0'; i++)
		_putchar(h[i]);
}
