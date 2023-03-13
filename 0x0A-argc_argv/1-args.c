#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector
 * Return: 0 if success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}

