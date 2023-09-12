#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 timeis
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
		_putchar(i);
		i++;
		}
		j++;
		_putchar('\n');
	}
}
