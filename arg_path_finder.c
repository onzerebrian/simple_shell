#include "main.h"


/**
 * arg_path_finder - concatenates the arguments
 * @parse: is a char
 * @n: is a char
 * Return: returns NULL
 */
char *arg_path_finder(char **parse, char **n)
{
	char *total;
	char **cat;
	int i;
	int j;
	int k;
	struct stat status;

	for (i = 0; n[i]; i++)
	{
		total = malloc(60);
		_strcat(total, n[i]);
		_strcat(total, "/");
		_strcat(total, parse[0]);

		if (stat(total, &status) == 0)
		{
			for (k = 0; *parse[k] != '\0'; k++)
				;
			cat = malloc(sizeof(char *) * (k + 1));
			cat[k] = NULL;
			cat[0] = _strcpy(total);

			for (j = 1; parse[j]; j++)
				cat[j] = _strcpy(parse[j]);
			_exec(cat);


			return (total);
		}
		free(total);
	}
	return (NULL);
}
