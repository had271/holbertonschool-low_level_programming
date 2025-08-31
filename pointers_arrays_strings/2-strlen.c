#include "main.h"

/*
 *_strlen - returns the length of a string
 *@s: pointert to count the length of a string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
