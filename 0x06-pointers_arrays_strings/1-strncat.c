#include "main.h"
/**
 * _strncat -concatenates two strings
 * @dest: destination  string to cancatenate with
 * @src: source string to concatenate
 * @n: integer
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	d = 0;
	while (dest[d])
		d++;
	i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d + i] = src[i];
	dest[d + i] = '\0';
	return (dest);
}
