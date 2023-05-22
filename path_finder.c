#include "main.h"


/**
 * path_finder - a path finding function
 * @m: global variable
 * @n: path delimiter
 * Return: pointer to path
 */
char **path_finder(char *n, char **m)
{
	char **tokens;
	char *_path;
	int k;
	int j;
	char *_name;
	char *final;

	for (j = 0; m[j]; j++)
	{
		_name = malloc(1024);

		for (k = 0; m[j][k] != '='; k++)
			_name[k] = m[j][k];

		if (string_compare(_name, "PATH"))
		{
			final = _length(m[j]);
			free(_name);
			_path = final;

		}
		free(_name);
	}
	_path = NULL;
	tokens = token(n, _path);
	return (tokens);
}
