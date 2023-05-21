#include "main.h"

/**
 * readinput - a function that gets user input
 * Return: pointer to the inpput string
 */
char *readinput(void)
{
	char *l = NULL;
	size_t i = 0;

	if (getline(&l, &i, stdin) == -1)
	{
		free(l);
		exit(-1);
		l = NULL;
	}
	return (l);
}
