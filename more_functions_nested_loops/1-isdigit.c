#include "main.h"

/**
 * main - prints _isdigit
 * @c: The number to check
 *
 * Return: 1 if c is a digit returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
