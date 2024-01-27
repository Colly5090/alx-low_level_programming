#include <stdio.h>
#include <string.h>
/**
 * generate_key - A function to generate key to usernam
 * @username: the username for the key
 * Return: a key
 */
char *generate_key(char *username)
{
	static char key[100];
	int len = strlen(username);
	int i;

	for (i = 0; i < len; i++)
	{
		key[i] = username[len - i - 1];
	}
	key[len] = '0' + (len % 10);
	key[len + 1] = '\0';

	return (key);
}

/**
 * main - An entry to the function
 * @argc: number of arguments
 * @argv: an array of argumnts
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	char *username, *key;

	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}
	username = argv[1];
	key = generate_key(username);
	printf("%s\n", key);

	return (0);
}
