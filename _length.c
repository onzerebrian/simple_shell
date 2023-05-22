#include "main.h"

/**
 * _length - funtcions that find lenght of string
 * @str: string pointer
 * Return: returns the lenght
 */
char *_length(char *str)
{
	int i;

	for (i = 0; str[i] != '='; i++)
		;
	return (str + i + 1);
}
