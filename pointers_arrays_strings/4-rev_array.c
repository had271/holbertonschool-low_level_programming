#include "main.h"

/**
 *reverse_array -
 *@a: array
 *@n: number of elements in array
 * Returen: reverse array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}

}
