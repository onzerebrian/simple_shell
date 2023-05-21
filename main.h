#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
int _putchar(char c);
char **token(char *del, char *input_string);
char *readinput(void);
void *re_alloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
