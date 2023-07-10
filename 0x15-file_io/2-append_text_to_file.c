#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfl, appendfl;
	int k = 0;

	if (filename == NULL)
		return (-1);

	openfl = open(filename, O_WRONLY | O_APPEND);

	if (openfl == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(openfl);
		return (1);
	}
	while (text_content[k])
		k++;

	appendfl = write(openfl, text_content, k);
	if (appendfl == -1)
	{
		close(openfl);
		return (-1);
	}
	close(openfl);
	return (1);

}
