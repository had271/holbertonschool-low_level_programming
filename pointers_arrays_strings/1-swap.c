#include "main.h"

/**
 * swap_int - swap a pointer from a to b
 *
 * @a: the frist integer
 * @b:the second integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
