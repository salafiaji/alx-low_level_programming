#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - This prog assigns a number to a variable
 * and determines if the last digit is positive or negative
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l = n % 10;

	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
