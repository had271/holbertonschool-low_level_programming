#include "main.h"
#include <stdio.h>
/**
* primeFactors - A function to print all prime factors
*@n: given number
*Return: the prime factors
*/
void primeFactors(int n)
{
	int i;

	while (n % 2 == 0)
{
	printf("%d ", 2);
	n = n / 2;
}
	for (i = 3; i * i <= n; i = i + 2)
{
	while (n % i == 0)
{
	printf("%d ", i);
	n = n / i;
}
}
	if (n > 2)
	printf("%d ", n);
}
