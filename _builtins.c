#include "main.h"

		
/**
 * _builtins - a function that finds the number of  commands
 * Return: the number of commands
 */
int _builtins()
{
	int i;
	struct b bs[] = {
		{"cd", _changedir},
		{"exit", _e_xit},
		{"help", _help},
		};
	i = sizeof(bs) / sizeof(struct b);


	return (i);
}