#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
char c;
char C;
for (c = 'a'; c <= 'z'; c++)
	putchar(c);

putchar('\n');
for (C = 'A'; C <= 'Z'; C++)
	putchar(C);
return (0);
}
