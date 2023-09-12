#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: number to be computed
 * Return: last digit
 */
int print_last_digit(int c)
{
int last_digit = c % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar('0' + last_digit);
return (last_digit);
}
