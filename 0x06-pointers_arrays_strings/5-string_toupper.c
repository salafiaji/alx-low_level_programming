#include "main.h"
/**
 * string_toupper - Function that changes all lowercase letters of a string to uppercase.
 *
 * Return: upper case characters
 */
char *string_toupper(char *str)
{
	int i;
	char delt;

	i = 0;
	delt = 'a' - 'A';
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= delt;
		i++;
	}
	return (str);
}
