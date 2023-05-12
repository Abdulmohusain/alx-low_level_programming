#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to
 * write to the file
 * Returns: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int g = 0;
	int newFile, writeFile;

	while(text_content[g] != '\0')
		g++;
	newFile = open(filename, O_RDWR | O_CREAT | O_TRUNC, "rw-------");

	writeFile = (newFile);
	if (writeFile == -1)
		return (-1);
	if (newFile == -1)
		return (-1);
	close(newFile);
	return (1);
}
