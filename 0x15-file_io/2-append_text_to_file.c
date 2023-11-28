#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 or -1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f_ptr, added_nm;

	if (filename == NULL)
		return (-1);
	f_ptr = open(filename, O_WRONLY | O_APPEND);
	if (f_ptr == -1)
		return (-1);
	if (text_content != NULL)
	{
		added_nm = write(f_ptr, text_content, strlen(text_content));
		if (added_nm == -1)
		{
			close(f_ptr);
			return (-1);
		}
	}
	close(f_ptr);
	return (1);
}
