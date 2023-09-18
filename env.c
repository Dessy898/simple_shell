#include "main.h"

/**
 * _getenv - a funtion that gets the environment variables
 * @envvar: environment variable
 * Return: the result of the environment and its content
 */

char *_getenv(char *envvar)
{
	int a = 0, b, stat;

	while (environ[a])
	{
		stat = 1;

		for (b = 0; environ[a][b] != '='; b++)
		{
			if (environ[a][b] != envvar[b])
			{
				stat = 0;
			}
		}
		if (stat == 1)
		{
			break;
		}
		a++;
	}
	return (&environ[a][b + 1]);
}

/**
 * _env - a program that priints the environment
 */

void _env(void)
{
	int a = 0;

	while (environ[a])
	{
		printf("%s\n", environ[a]);
		a++;
	}
}
