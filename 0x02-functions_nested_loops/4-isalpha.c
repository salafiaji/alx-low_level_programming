#include "main.h"
/**
 * _isalpha - Checks for alphabet character
 * @c: operand
 * Return: 1 if c is a letter and 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
