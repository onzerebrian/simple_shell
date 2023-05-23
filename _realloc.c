#include "main.h"

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