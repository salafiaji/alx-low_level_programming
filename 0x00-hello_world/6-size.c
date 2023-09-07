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
float j;
printf("Size of a char is: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int is: %lu.\n", (unsigned long)sizeof(d));
printf("Size of a float is: %lu.\n", (unsigned long)sizeof(j));

return (0);
}
