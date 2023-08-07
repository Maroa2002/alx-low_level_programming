#include "main.h"

/**
  * read_textfile - Reads a certain number of bytes from a file
  * and prints them to stdout.
  * @filename: The file to read from.
  * @letters: The number of bytes to read.
  * Return: The actual number of bytes read and printed.
  **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open the file */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* memory allocation for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	/* read the file */
	n_read = read(file_descriptor, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	/* write to the file */
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (n_written);
}

