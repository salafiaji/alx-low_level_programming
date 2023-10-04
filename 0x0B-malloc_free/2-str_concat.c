#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenate two strings
 * @s1: first variable
 * @s2: second variable
 * Return: pointer to character
 */

char *str_concat(char *s1, char *s2)
{
	int i, k, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;
	len++;
	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (k = 0; s2[k] != '\0'; k++, i++)
		concat[i] = s2[k];
	concat[i] = '\0';
	return (concat);
}
