#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmember: array
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmember, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (nmember == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmember * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; index < (nmember * size); index++)
	{
		ptr[index] = 0;
	}
	return (ptr);
}
