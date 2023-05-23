#include "main.h"

/**
 * main - the start of the shell program
 * Return: returns 0 on success
 */
int main()
{
    char *line_input;
    char **t;
    char *tok_del;


    tok_del = " \t\r\n";
    while (1)
    {
        _putchar('$');
        _putchar(' ');

        line_input = read_line();
        t = _tokenize(tok_del, line_input);

        if (t[0] != NULL)
	    {
		    _exec(t);
	    }

	    free(t);
	    free(line_input);
	}
 
    return (0);
}