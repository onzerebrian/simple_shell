#include "main.h"

/**
 * token - function that tokenize string input
 * @del: the delemeters
 * @input_string: pointer to string input
 * Return: returns pointer to the tokenized strings
 */

int _strcmp(char *s1, char *s2)
 {
    	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
 }