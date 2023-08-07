#include "main.h"

/**
 * create_file - a function to create a file
 * @filename: the file to be created
 * @text_content: A NULL terminated string
 * Return: 1 Success -1 failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int c;
	int myW;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	myW = write(fd, text_content, c);

	if (fd == -1 || myW == -1)
		return (-1);

	close(fd);
	return (1);
}
