#include "main.h"

/**
 * _exec - function that executes a command
 * @parse: pointer to command
 * Return: returns 0 on success
 */

void _exec(char **parse)
{
	pid_t pi;
	int i, m;
	int x, status;
	struct b bs[] = {
		{"cd", _changedir},
		{"exit", _e_xit},
		{"help", _help},
		};
	
	m = _builtins();
	for (i = 0; i < m; i++) 
	{
	x = _strcmp(parse[0], bs[i].name);
	if (x == 0) 
	{
	bs[i].func(parse);
	return;
	}
	}
	pi = fork();
	if (pi == 0)
	{
        execvp(parse[0], parse);
        perror("Error");
        exit(1);
    }
	else
	if (pi > 0)
	{
        do {
        	waitpid(pi, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
	else
	{
        perror("error");
    }
}