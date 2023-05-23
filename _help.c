#include "main.h"

/**
 * re_alloc - memory reallocation function
 * @ptr: pointer
 * @old_size: initial size of memory
 * @new_size: new memory size
 * Return: returns null
 */

void _help(char **args)
 {
    char *text;
    int i = 0;

    text = "THE FOLLOWING CMDS ARE BUILT IN CD, HELP, EXIT\n"
        "cd : change directory"
        "exit: exit the program"
        "help: help";
    (void)args;

    for (; text[i] != '\0'; i++)
    {
        _putchar(text[i]);
    }
 }