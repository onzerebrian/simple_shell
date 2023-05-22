#include "main.h"

/**
 * _strcat - main function that copies src to the end of dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: returns the combine strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while ((dest[i]) != '\0')
	{
		len = len + 1;
		i++;
	}
	for (i = 0; (src[i]) != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
