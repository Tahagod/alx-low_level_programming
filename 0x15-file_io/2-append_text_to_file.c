#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: file to create
 * @text_content: content to write
 *
 * Return: 1 on succes, 0 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ab;
	ssize_t byte, len = strlen(text_content);

	if (!filename)
		return (-1);
	ab = open(filename, O_WRONLY | O_APPEND);

	if (ab == -1)
		return (-1);
	if (len)
		byte = write(ab, text_content, len);
	close(ab);
	return (byte == len ? 1 : -1);
}
