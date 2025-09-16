#include "main.h"
#include <stdlib.h>
/**
 *create_array - Create array of chars
	 and initializes it with a specific char.
 * @size: the size of the array
 *@c: the specific char
 *Return: return NULL if the size of the array 0 or filed to return a pointer
 *	Otherwise return pointer	
 */
char *create_array(unsigned int size, char c)
{
       	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	
	if (array == NULL)
	       return (NULL);

	for (index = 0; index < size; index++)
		array[index] =c;

	return (array);
}
