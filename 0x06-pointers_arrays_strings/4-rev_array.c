#include "main.h"

/**
 * reverse_arblessing - function
 * @a: param
 * @n: param
 */

void reverse_arblessing(int *a, int n)
{
	int blessing = 0;
	int leo;

	while (blessing < n--)
	{
		leo = a[blessing];
		a[blessing++] = a[n];
		a[n] = leo;
	}
}
