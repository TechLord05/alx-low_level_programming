#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: the name of the file
 * @letters: index
 * Return: byte written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = open(filename, O_RDONLY);
	ssize_t  _btyeread, _btyewrite;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_btyeread = read(f, buffer, letters);
	if (_btyeread == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	_btyewrite = write(STDOUT_FILENO, buffer, _btyeread);

	if (_btyewrite == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	close(f);
	return (_btyeread);
}
