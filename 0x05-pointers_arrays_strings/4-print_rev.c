#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * _strlen: returns length of string
 * @s: pointer to character
 *
 * Return: void
 */
void print_rev(char *s)
{
	int m;
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');
}
