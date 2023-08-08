#include "main.h"

/**
 * create_file - Create a file with specified content and permissions.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, output, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
		{
			count++;
			output = write(fd, text_content + count - 1, 1);
		}
	}

	if (output == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
