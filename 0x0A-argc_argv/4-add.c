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
	int sum = 0;
	int counter = 1;

	if (argc == 1)
		printf('0\n');

        while (argc-- && argc != 0 )
	{
		if (!isdigit(argv[counter]))
        	{
                	printf("Error\n");
                	return (1);
	        }

		sum += atoi(argv[counter++]);
	}
	printf("%d\n", sum);
        exit(EXIT_SUCCESS);
}

