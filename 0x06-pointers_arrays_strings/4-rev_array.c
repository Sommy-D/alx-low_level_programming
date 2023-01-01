#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p, k;

	for (p = 0; (p < (n - 1) / 2);
			p++)
	{
	k = a[p];
	a[p] = a[n - 1 - p];
	a[n - 1 - p] = k;
	}
}
