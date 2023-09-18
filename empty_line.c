#include "main.h"

/**
 * empty - A program that checks if a line exits or not
 * @buff: the line to be checked using a buff character
 * Return: 0 if char exists, 1 if it doesnt
 */

int empty(char *buff)
{
	int j;

	for (j = 0; buff[j] != '\0'; j++)
	{
		if (buff[j] != ' ')
		{
			return (0);
		}
	}
	return (1);
}
