#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *content;

	if (filename == NULL)
		return (0);

	content = malloc(sizeof(char) * letters);
	if (content == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(content);
		return (0);
	}

	bytes_read = read(file_descriptor, content, letters);
	bytes_written = write(STDOUT_FILENO, content, bytes_read);

	if (bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
	{
		free(content);
		close(file_descriptor);
		return (0);
	}

	free(content);
	close(file_descriptor);

	return (bytes_written);
}

