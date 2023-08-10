#include <elf.h>
#include "main.h"

void is_elf(unsigned char *e_ident);
void is_magic(unsigned char *e_ident);
void is_class(unsigned char *e_ident);
void is_data(unsigned char *e_ident);
void is_version(unsigned char *e_ident);
void is_osabi(unsigned char *e_ident);
void is_abiversion(unsigned char *e_ident);
void is_type(unsigned int e_type, unsigned char *e_ident);
void is_entry(unsigned long int e_entry, unsigned char *e_ident);
void fileClose(int fd);

/**
 * is_elf - to check if a file is an elf type
 * @e_ident: pointer of array to the magic number
 * Return: nothing
 */
void is_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7f || e_ident[1] != 'E' ||
			e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Wrong elf file type\n");
		exit(98);
	}
}

/**
 * is_magic - to print magic number
 * @e_ident: pointer of arrays to the magic numbers
 * Return: Nothing
 */
void is_magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic:  ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * is_class - to print elf class
 * @e_ident: pointer array to elf class
 * Return: Nothing
 */
void is_class(unsigned char *e_ident)
{
	printf(" Class:				");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * is_data - to print data of elf file
 * @e_ident: pointer of array to elf data
 * Return: nothing
 */
void is_data(unsigned char *e_ident)
{
	printf(" Data:				");

	if (e_ident[EI_DATA] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * is_version - to print the version of elf file
 * @e_ident: pointer of array to version of the elf file
 * Return: Nothing
 */
void is_version(unsigned char *e_ident)
{
	printf(" Version:				%d",
			e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}

/**
 * is_osabi - to print OS/ABI of an elf file
 * @e_ident: pointer array to OS/ABI of elf file
 * Return: nothing
 */
void is_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:				");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unkown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * is_abiversion - to print the version of ABI
 * @e_ident: pointer to the array of the ABI
 * Return: nothing
 */
void is_abiversion(unsigned char *e_ident)
{
	printf(" ABI Version:				%d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * is_type - to print the type of the elf file
 * @e_ident: pointer of array to the e_type elf file
 * @e_type: the elf type
 * Return: nothing
 */
void is_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf(" Type:				");

	if (e_type == ET_NONE)
	{
		printf("NONE (none)\n");
	}
	else if (e_type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (e_type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (e_type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (e_type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unkown: %x>\n", e_type);
	}
}

/**
 * is_entry - to print entry of the elf filw
 * @e_ident: pointer to array of entry elf files
 * @e_entry: entry of elf file
 * Return: nothing
 */
void is_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address:				");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * fileClose - to close all open files
 * @fd: file to close
 * Return: nothing
 */
void fileClose(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - entry point to get elf file information
 * @argc: number of argument supplied
 * @argv: pointer to the argument supplied
 * Return: 0 success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int openFile, readFile;
	Elf64_Ehdr *header;

	openFile = open(argv[1], O_RDONLY);
	if (openFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		fileClose(openFile);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	readFile = read(openFile, header, sizeof(Elf64_Ehdr));
	if (readFile == -1)
	{
		free(header);
		fileClose(openFile);
		dprintf(STDERR_FILENO, "Error: `%s`: No Such file\n", argv[1]);
		exit(98);
	}
	is_elf(header->e_ident);
	printf("ELF Header:\n");
	is_magic(header->e_ident);
	is_class(header->e_ident);
	is_data(header->e_ident);
	is_version(header->e_ident);
	is_osabi(header->e_ident);
	is_abiversion(header->e_ident);
	is_type(header->e_type, header->e_ident);
	is_entry(header->e_entry, header->e_ident);

	free(header);
	fileClose(openFile);
	return (0);
}
