#include "main.h"

/**
 * read_textfile - a function that reads text file
 * @filename: pointer to the file to read from
 * @letters: file to write to
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t myFile;
	char *space;
	ssize_t myR;
	ssize_t myW;

	myFile = open(filename, O_RDONLY);
	if (myFile == -1)
		return (0);

	space = malloc(sizeof(char) * letters);
	if (space == NULL)
		return (0);

	myR = read(myFile, space, letters);
	if (myR == -1)
		return (0);

	myW = write(STDOUT_FILENO, space, myR);

	free(space);
	close(myFile);
	return (myW);
}
