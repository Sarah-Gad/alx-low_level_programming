#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: pointer to the file.
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t tot_num, rd_num;
	FILE *f_ptr;
	char *buff;

	if (filename != NULL)
	{
		buff = malloc(sizeof(char) * (letters + 1));
		if (buff == NULL)
		{
			return (0);
		}
		f_ptr = fopen(filename, "r");
		if (f_ptr == NULL)
		{
			free(buff);
			return (0);
		}
		rd_num = fread(buff, sizeof(char), letters, f_ptr);
		tot_num = write(1, buff, rd_num);
		if (tot_num != rd_num)
		{
			free(buff);
			fclose(f_ptr);
			return (0);
		}
		fclose(f_ptr);
		free(buff);
		return (tot_num);
	}
	else
		return (0);
}

