#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer
 * @text_content: The string
 * Return: If the function fails or filename is NULL - -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int p, a, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	a = write(p, text_content, l);

	if (p == -1 || a == -1)
		return (-1);

	close(p);

	return (1);
}
