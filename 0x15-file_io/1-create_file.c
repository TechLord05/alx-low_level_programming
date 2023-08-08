#include "main.h"

/**
 * create_file - Creates a file with the given text content.
 * @filename: Name of the file to be created.
 * @text_content: Text content to be written to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);

	int name = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);

	if (name == -1)
		return (-1);

	int count = 0;

	if (text_content)
	{
		while (text_content[count])
		count++;
		int output = write(name, text_content, count);

		if (output == -1)
		{
			close(name);
			return (-1);
		}
	}

	close(name);
	return (1);
}
