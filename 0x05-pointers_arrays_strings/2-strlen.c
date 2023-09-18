#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: pointer to character
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

