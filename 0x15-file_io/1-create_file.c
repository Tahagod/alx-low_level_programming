#include "main.h"

/**
 * create _file - creates a file
 * @filename: file to create
 * @text_content:content to write
 *
 * Return:0 on fail, 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int ab;
	ssize_t byte = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	ab = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ab == -1)
		return (-1);
	if (len)
		byte = write(ab, text_content, len);
	close(ab);
	return (byte == len ? 1 : -1);
}
