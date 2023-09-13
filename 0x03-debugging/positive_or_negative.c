#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"
/**
 * main - This prog assigns a number to a variable
 * and determines if it is positive or negative
 *
 *Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return;
}
