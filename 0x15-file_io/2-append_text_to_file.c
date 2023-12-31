#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to be appended
 * @text_content: null terminated string to add at the end of the file.
 *
 * Return: 1 on success. -1 on failure.
 * -1 if filename is NULL and -1 if file does not exist or
 * the user lacks write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
