#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
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
			if (n == 9)
				break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
