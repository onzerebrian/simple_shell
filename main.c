#include "main.h"
/**
 * main - the main function
 * @argc: number of arguments passed witn hsh
 * @argv: arguments passed == tokens pointer
 * @environ: valiable (global)
 * Return: zero is returned on success
 */

int main(int argc, char **argv, char **environ)
{
	char *line_input;
	char *del;
	char **path;
	char *com;
	char *pdel;

	pdel = ":";
	path = path_finder(pdel, environ);
	signal(SIGINT, SIG_IGN);

	(void)argc;
	del = " \t\r\n";
	line_input = NULL;
	do {
		_putchar('-');
		_putchar('$');
		_putchar(' ');
		line_input = readinput();

		argv = token(del, line_input);
		com = arg_path_finder(argv, path);

		if (com == NULL)
		{
		_exec(argv);
		}
		free(line_input);
		free(argv);
		free(com);
	} while (1);

	return (0);
}
