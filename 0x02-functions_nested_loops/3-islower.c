#include "main.h"
/**
 * _islower - Checks for lower case character
 * @c: operand
 * Return: 1 if c is lowercase and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
