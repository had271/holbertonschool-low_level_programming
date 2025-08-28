#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int H;
	int M;

	for (H = 0; H <= 23; H++)
	{
		for (M = 0; M <= 59; M++)
		{
			printf("%02d:%02d\n", H, M);
}}}
