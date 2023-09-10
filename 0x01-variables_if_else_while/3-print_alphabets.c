#include <stdio.h>
/**
 * main - prints the alphabets in lower case
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c, h;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (h = 'A'; h <= 'Z'; h++)
	{
	putchar(h);
	}
	putchar('\n');
	return (0);
}
