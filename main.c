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
	int i = 0;
	/**
	char **tokens_array;
	char *com;*/

/**
	tokens_array = find_path(environ);
	signal(SIGINT, SIG_IGN);
*/
	(void)argc;
	(void)environ;
	del = " \t\r\n";
	line_input = NULL;
	do {
		_putchar('-');
		_putchar('$');
		_putchar(' ');
		line_input = readinput();

		argv = token(del, line_input);
		for (i = 0; argv[i] != NULL; i++)
		{ 
		printf("%s\n", argv[i]);
		}
		/**com = args_path(argv, tokens_array);

		if (com == NULL)
		{
			execute(argv);
		} */
		free(line_input);
		free(argv);
		/**
		free(com); */
	} while (1);
	return (0);
}
