#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *
 *
 */
char *_strdup(char *str)
{
	int i, length;
	char *copy;

	length = 0;
	length = strlen(str);
	if (str == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * length + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
