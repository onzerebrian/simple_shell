#include "main.h"
/**
 * _strcpy - function that duplicates string
 * @src: source string pointer
 * Return: copy of str
 */
char *_strcpy(char *src)
{
	char *new;
	int i;

	if (src == NULL)
		return (NULL);

	new = malloc(_strlen(src) + 1);

	if (new == NULL)
		return (NULL);

	i = 0;

	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}

	new[i] = '\0';

	return (new);
}
