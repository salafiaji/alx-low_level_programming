#include <stdio.h>
/**
 * main - prints the alphabets in lower case
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
	if (c == 'e' || c == 'q')
	c++;
	putchar(c);
	}
	putchar('\n');
	return (0);
}
