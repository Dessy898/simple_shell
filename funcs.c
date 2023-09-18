#include "main.h"
#define STR_CTRL_C "\n#cisfun$ "

/**
 * sighandler - a function that handles signals in the shell
 *@num: integer variable
 * Return: void
 */

void sighandler(int num)
{
	char *ctrlc = STR_CTRL_C;

	if (num == SIGINT)
	{
		print_shell(ctrlc);
		fflush(stdout);
	}
}

/**
 * print_shell - a function that print a string in the shell
 * @s : is char variable
 * return : void
 */

void print_shell(char *s)
{
	ssize_t filenum;

	filenum = write(STDOUT_FILENO, s, _strlen(s));
	if (filenum == -1)
	{
		perror("Error, unable to print to stdout");
	}
}

/**
 * env_shell - a function prints environment of the shell
 * @arrp: is char variable
 * Return: none
 */

void env_shell(char **arrp)
{
	int count1;
	int count2;

	if (_strcmp(arrp[0], "env") == 0)
	{
		for (count1 = 0; environ[count1] != NULL; count1++)
		{
			for (count2 = 0; environ[count1][count2] != '\0'; count2++)
			{
				write(STDOUT_FILENO, &environ[count1][count2], 1);
				write(STDOUT_FILENO, "\n", 1);
			}
		}
	}
}

/**
 * _strcmp - a function compares two strings
 * @s1: a string pointer
 * @s2: another string pointer
 * Return: the s[2] -s[1]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _strlen - a program that returns the length of a string
 * @s: a char pointer
 *Return: character to string length
 */

int _strlen(char *s)
{
	int chars  = 0;

	while (*s != '\0')
	{
		chars++;
		s++;
	}
	return (chars);
}
