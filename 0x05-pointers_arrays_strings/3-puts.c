#include "main.h"
/**
 * _puts - Prints a string, followed by a new line
 * @str: pointer to character
 *
 * Return: void
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;
	for (m = 0; c[m]; m++)
		_putchar(c[m]);
	_putchar('\n');
}
