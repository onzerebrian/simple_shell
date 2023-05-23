#include "main.h"

/**
 * read_line - a function that gets user input
 * Return: pointer to the inpput string
 */
char *read_line(void)
{
	char *l = NULL;
	size_t i = 0;

	if (getline(&l, &i, stdin) == -1)
	{
		exit(-1);
	}
	return (l);
}