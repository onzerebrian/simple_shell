#include "main.h"

/**
 * token - function that tokenize string input
 * @del: the delemeters
 * @input_string: pointer to string input
 * Return: returns pointer to the tokenized strings
 */
char **token(char *del, char *input_string)
{

	char **s_t;
	int buf = 1024;
	int i;

	s_t = malloc(sizeof(char *) * buf);

	if (s_t == NULL)
	{
		exit(99);
	}

	i = 0;
	s_t[i] = strtok(input_string, del);

	i++;


	do {
		s_t[i] = strtok(NULL, del);
		if (i >= buf)
		{
		buf = buf * 1.5;
		s_t = re_alloc(s_t, buf, buf * (sizeof(char *)));
		if (s_t == NULL)
		{
			exit(98);
		}
		}
		if (s_t[i] == NULL)
		{
			break;
		}
		i++;
	} while (1);

	return (s_t);
}

/**
 * re_alloc - memory reallocation function
 * @ptr: pointer
 * @old_size: initial size of memory
 * @new_size: new memory size
 * Return: returns null
 */

void *re_alloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	unsigned int i;
	char *new;


	if (ptr == NULL)
	{
	new = malloc(new_size);
	return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}


	if (new_size == old_size)
	{
	return (ptr);
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		new[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new);
}
