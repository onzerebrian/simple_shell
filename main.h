#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

struct b
{
        char *name;
        void (*func)(char **args);
};

int _putchar(char c);
char *read_line(void);
void *re_alloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **_tokenize(char *del, char *input_string);
void _exec(char **parse);
void _changedir(char **args);
void _e_xit(char **args);
void _help(char **args);
int _strcmp(char *s1, char *s2);
int _builtins();


#endif