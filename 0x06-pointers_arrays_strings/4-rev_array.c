#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first, i;
	int last;

	first = 0;
	last = n - 1;
	while (first < last)
	{
		i = a[first];
		a[first] = a[last];
		a[last] = i;
		first++;
		last--;
	}
}
