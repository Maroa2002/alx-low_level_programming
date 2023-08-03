#include "simple_shell.h"

/**
 * main - Simple Unix command-line interpreter (shell).
 *
 * Description:
 * This program implements a basic Unix command-line interpreter (shell) that
 * allows the user to enter one-word commands and execute them. It displays a
 * prompt "$ " and waits for the user to input a command. The shell
 * reads the command, executes it in a child process using the execve system
 * call, and waits for the child process to complete (if any).
 * The shell handles basic error checking and displays error messages for
 * incorrect or non-existing commands.
 *
 * Return: Always 0.
 */

int main(void)
{
	char input[MAX_INPUT_LENGTH], *argv[] = {NULL, NULL};
	pid_t pid; /* process identifier */
	int status;
	size_t size;
	ssize_t bytes_read;

	while (1) /* infinite loop to keep the shell running */
	{
		show_prompt(); /* Display the prompt */
		bytes_read = read(STDIN_FILENO, input, MAX_INPUT_LENGTH - 1);
		if (bytes_read == 0) /* Handle EOF */
		{
			write(STDOUT_FILENO, "\n", 1);
			break; /* break loop and exit */
		}
		else if (bytes_read < 0)
		{
			perror("read");
			break;
		}
		/* Remove the trailing newline character from input */
		size = _strlen(input);
		if (input[size - 1] == '\n')
			input[size - 1] = '\0';
		pid = fork(); /* Fork a child process */
		if (pid < 0) /* handling forking error */
			perror("fork");
		else if (pid == 0) /* execute command using execve if child process */
		{
			argv[0] = input;
			execve(input, argv, environ); /* executing the command */
			perror("./shell"); /* display error if execve return */
			exit(EXIT_FAILURE); /* exit child process */
		}
		else /* if parent processs i.e pid > 0 */
		{
			wait(&status); /* wait for execution of child process */
		}
	}
	return (0);
}
