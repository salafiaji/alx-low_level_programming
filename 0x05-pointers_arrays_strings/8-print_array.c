#include "main.h"
#include <stdio.h>
/**
 * print_array - rints n elements of an array of integers
 * @a: array
 * @n: number of array elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
