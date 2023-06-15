/*
 * Filename: 101-quote.c
 * Main: entry path
 * Return: 1 shows standard error
 *\

#include <unistd.h>

int main()
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

    return 1;
}
