#include "simple_shell.h"


/**
  * show_prompt - prints shell prompt
  * @void: takes no parameter
  * Return: void
  **/

void show_prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
