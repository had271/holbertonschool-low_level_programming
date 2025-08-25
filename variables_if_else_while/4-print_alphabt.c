#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
	if (c == 'q' || c == 'e')
		continue;
	else
	putchar(c);
putchar('\n');

return (0);
}
