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

	newFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (newFile == -1)
		return (-1);
	
	while(text_content[g] != '\0')
		g++;
	
	writeFile = write(newFile, text_content, g);
	if (writeFile == -1)
		return (-1);
	
	close(newFile);
	return (1);
}
