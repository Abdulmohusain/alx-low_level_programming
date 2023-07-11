#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF 1024
/**
 * readf - A function that reads file1 and file2.
 * @file1: First file
 * @file2: Second file.
 * @buf: buffer
 * @from: the first file name
 * @to: the second file name.
 */
void readf(int file1, int file2, char *buf, char *from, char *to)
{
	int rf, wrf;


	do {
		rf = read(file1, buf, BUFF);
		if (rf == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", from);
			exit(98);
		}
		wrf = write(file2, buf, BUFF);
		if (wrf == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", to);
			exit(99);
		}
	} while (rf > 0);

}
/**
 * cpy -  Function that copies the content of a file to another file.
 * @from: The fist file to copy its content to @file2.
 * @to: The second file.
 */
void cpy(char *from, char *to)
{
	int file1, file2, cl1, cl2;
	char *buf = malloc(sizeof(char) * BUFF);

	file1 = open(from, O_RDONLY);
	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	file2 = open(to, O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	readf(file1, file2, buf, from, to);
	cl1 = close(file1);
	cl2 = close(file2);
	if (cl1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
}
/**
 * main - Entry point
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	cpy(argv[1], argv[2]);
	return (0);
}

