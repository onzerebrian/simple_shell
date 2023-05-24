#include "main.h"

/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	PRINTER("$ ");
}
/**
 * print_error - Display Error Based on Command and How Many Time Shell Looped
 * @input:User Input
 * @counter:Simple Shell Count Loop
 * @argv:Program Name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *er;

	(void)argv;
	er = _itoa(counter);
	free(er);
	PRINTER(input);
	PRINTER(": No such file or directory\n");
}
