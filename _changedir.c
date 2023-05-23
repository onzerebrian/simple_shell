#include "main.h"

/**
 * _changedir - change directory help
 * @args: argument pointer
 */
void _changedir(char **args)
{
	if (args[1] == NULL)
	{
        fprintf(stderr, "missing argument\n");
    }
	else
	{
	if (chdir(args[1]) != 0)
	{
	perror("CD funtion Error");
	}
	}
}