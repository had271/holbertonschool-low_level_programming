#include "main.h"

/**
 * main - prints _isupper
 * @c: The number to check
 *
 * Return: return 1 if c is uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
