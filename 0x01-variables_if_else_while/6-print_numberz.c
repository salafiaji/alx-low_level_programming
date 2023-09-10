#include <stdio.h>
/**
 * main - Prints numbers 0 - 9
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
/*'0' == 48 which is ascii code for zero */
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
