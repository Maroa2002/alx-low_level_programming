/* simple_shell.h header file */

#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h> 

/*
 * Macro to define the maximum length of user input
 * macros enable us to change the value at any time
 **/

#define MAX_INPUT_LENGTH 100

/* Declare the environ variable explicitly */
extern char **environ;

/* function prototype for the task 0 */
void *malloc_checked(unsigned int b);

/* Function prototype for print_prompt */
void show_prompt(void);

/* function prototype for custom strlen */
size_t _strlen(const char *str);

#endif /* SIMPLE_SHELL_H */

