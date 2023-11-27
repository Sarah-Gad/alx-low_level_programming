#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: string to write to the file
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int f_ptr;
	ssize_t wttn;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		f_ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (f_ptr == -1)
			return (-1);
		return (1);
	}
	f_ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f_ptr == -1)
		return (-1);
	wttn = write(f_ptr, text_content, strlen(text_content));
	if (wttn == -1)
	{
		close(f_ptr);
		return (-1);
	}
	close(f_ptr);
	return (1);
}

