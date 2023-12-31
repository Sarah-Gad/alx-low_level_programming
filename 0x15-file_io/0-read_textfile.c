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
	ssize_t tot_num, rd_num;
	FILE *f_ptr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
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
	if (rd_num == -1)
	{
		free(buff);
		fclose(f_ptr);
		return (0);
	}
	tot_num = write(STDOUT_FILENO, buff, rd_num);
	fclose(f_ptr);
	free(buff);
	return (tot_num);
}
