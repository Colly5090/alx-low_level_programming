#include "main.h"

/**
 * append_text_to_file - to append a text to a file
 * @filename: the name of the file
 * @text_content: null terminated string
 * Return: 1 success -1 failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int c = 0;
	int myW;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	myW = write(fd, text_content, c);

	if (fd == -1 || myW == -1)
		return (-1);

	close(fd);
	return (1);
}
