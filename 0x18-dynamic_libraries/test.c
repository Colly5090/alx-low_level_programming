#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) intercept(void)
{
	printf("9 8 10 24 75 - 9\n");
	printf("Congratulations, you win the Jackpot!\n");
	exit(EXIT_SUCCESS);
}
