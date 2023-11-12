#include "main.h"

/**
 * read_textfile - read text from a file
 * @filename:file to read
 * @letters: bytes to read
 *
 * Return: bytes
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int ab;

	ssize_t byte;

	char buf(READ_BUF_SIZE * 8);

	if (!filename || !letters)
		return (0);
	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	bytes = read(ab, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], byte);
	close(ab);
	return (byte);
}
