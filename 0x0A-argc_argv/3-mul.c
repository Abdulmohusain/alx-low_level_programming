#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
