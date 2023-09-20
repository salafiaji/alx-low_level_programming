#include "main.h"
/**
 * _strcat - Function that concatenates two strings.
 * @dest: string to be added to
 * @src: string being added to dest
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int d, s; /*length of dest and src respectively*/
	int i;

	d = 0;
	while (dest[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0')
		s++;
	for (i = 0; i < s && src[i] != '\0'; i++)
		dest[d + i] = src[i];
	dest[d + i] = '\0';
	return (dest);
}

