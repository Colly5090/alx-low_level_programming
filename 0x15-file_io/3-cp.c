#include "main.h"

char *createBuffer(char *list);
void close_to_from(int fd);

/**
 * createBuffer - To create a memory buffer to store all the characters
 * @list: the buffer name of characters store on the buffer
 * Return: pointer to the new buffer
 */
char *createBuffer(char *list)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", list);
		exit(99);
	}
	return (buffer);
}
/**
 * close_to_from - function to close from and to files
 * @fd: file descriptor
 * Return: nothing
 */
void close_to_from(int fd)
{
	int closeFile;

	closeFile = close(fd);
	if (closeFile == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}
/**
 * main - An entry point to the program
 * @argc: the number of arguments
 * @argv: pointer to the arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int fromFile, readFile, toFile, writeFile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = createBuffer(argv[2]);
	fromFile = open(argv[1], O_RDONLY);
	readFile = read(fromFile, buffer, 1024);
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fromFile == -1 || readFile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writeFile = write(toFile, buffer, readFile);
		if (toFile == -1 || writeFile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readFile = read(fromFile, buffer, 1024);
		toFile = open(argv[2], O_WRONLY | O_APPEND);
	} while (readFile > 0);
	free(buffer);
	close_to_from(fromFile);
	close_to_from(toFile);
	return (0);
}
