#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabetx10 in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int repeat, times = 10;

	for (repeat = 0; repeat < times; repeat++)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}
