#include "main.h"

/**
 * _strlen - counts the lenght of a string
 *
 * @s: pointer
 *
 * Return: returns the lenght of string
 */

int _strlen(char *s)
{
	int i = 0, l = 0;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
