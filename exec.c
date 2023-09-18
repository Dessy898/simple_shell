#include "main.h"

/**
 * execute - a function that executes a program and waits for input
 * @arrp: character type, pointer
 * Return: exit status
 */

int execute(char **arrp)
{
	int id = fork(), status;

	if (id == 0)
	{
		if (execve(arrp[0], arrp, environ) == -1)
			perror("error: Process child does not exist.");
	}
	else
	{
		wait(&status);

		if (WIFEXITED(status))
		{
			status = WEXITSTATUS(status);
		}
	}
	return (status);
}
