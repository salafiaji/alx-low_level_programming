#include <stdio.h>

/**
 * main - Program prints sizes of various types in C
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int d;
long int p;
long long int q;
float j;
printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s).\n", (unsigned long)sizeof(d));
printf("Size of an long int: %lu byte(s).\n", (unsigned long)sizeof(p));
printf("Size of an long long int: %lu bytes(s).\n",
(unsigned long)sizeof(q));
printf("Size of a float: %lu bytes(s).\n", (unsigned long)sizeof(j));

return (0);
}
