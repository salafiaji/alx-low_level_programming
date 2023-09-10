#include <stdio.h>
/**
 * main - prints the alphabets in lower case in reverse order
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
