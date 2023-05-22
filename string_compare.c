#include "main.h"

/**
 * string_compare - compares two strings
 * @v: first string
 * @d: second string
 * Return: returns 0 on if negative and 1 is positive
 */
int string_compare(char *v, char *d)
{
	int i;

	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] != v[i])
			return (0);
	}
	return (1);
}
