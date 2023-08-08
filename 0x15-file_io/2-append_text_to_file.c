#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	_write = write(fd, text_content, strlen(text_content));
	if (_write == -1 || _write != strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
