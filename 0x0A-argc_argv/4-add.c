#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - program that multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int sum = 0;
	int counter = 1;

	if (argc == 1)
		printf("0\n");
	while (argc && argc != 1)
	{
		if (!isdigit(*argv[counter])
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[counter]);
		counter++;
		argc--;
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
