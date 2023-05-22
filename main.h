#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _putchar(char c);
char **token(char *del, char *input_string);
char *readinput(void);
void *re_alloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **path_finder(char *n, char **m);
int string_compare(char *v, char *d);
char *_length(char *str);
char *_strcat(char *dest, char *src);
char *arg_path_finder(char **parse, char **n);
char *_strcpy(char *src);
int _strlen(char *s);
int _exec(char **parse);



#endif
