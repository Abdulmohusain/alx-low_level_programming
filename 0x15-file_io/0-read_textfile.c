#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The file name
 * @letters: Number of letters to be copied.
 * Return: the actual number of letters it could
 * read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filedes, rfile, wfile;
	char *buff = malloc(sizeof(char) * letters);

	filedes = open(filename, O_RDONLY);

	if (buff == NULL)
		return (0);
	if (filedes == -1)
		return (0);
	rfile = read(filedes, buff, letters);
	if (rfile == -1)
		return (0);
	wfile = write(STDOUT_FILENO, buff, rfile);
	free(buff);
	if (wfile == -1)
		return (0);
	close(filedes);
	return (wfile);

}
