#include "main.h"


/**
 * token - function that tokenize string input
 * @del: the delemeters
 * @input_string: pointer to string input
 * Return: returns pointer to the tokenized strings
 */
char **_tokenize(char *del, char *input_string)
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