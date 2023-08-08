#include "main.h"

/**
 * main - entry point to the program
 * @argc: number of arguments
 * @argv: pointer to the arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t size;
	char buffer[5];
	char elf[1];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		exit(97);
	}
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98);
	}
	size = read(fd, buffer, 4);
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	size = lseek(fd, 1, SEEK_SET);
	size = read(fd, elf, 1);

	if (elf[0] != 'E')
		exit(98);
	close(fd);
	return (0);
}
