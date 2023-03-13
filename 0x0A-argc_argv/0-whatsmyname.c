#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line.
 * @argc: Argument count.
 * @argv: Argument vector
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
