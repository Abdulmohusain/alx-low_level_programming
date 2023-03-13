#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vector
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	while (argc)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	exit(EXIT_SUCCESS);
}
