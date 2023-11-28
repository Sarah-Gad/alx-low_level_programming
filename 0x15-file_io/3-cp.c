#include "main.h"
/**
 * main - entry point of the program
 * @argc: num of args
 * @argv: pointer to the first arg.
 * Return: 0 if succeed.
*/
int main(int argc, char *argv[])
{
	char buff[1024];
	int f_fil, s_fil, ns_fil;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_fil = open(argv[1], O_RDONLY);
	if (f_fil == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	s_fil = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (s_fil == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(f_fil);
		exit(99);
	}
	while ((ns_fil = read(f_fil, buff, sizeof(buff))) > 0)
	{
		if (write(s_fil, buff, ns_fil) != ns_fil)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(f_fil);
			close(s_fil);
			exit(99);
		}
	}
	if (ns_fil == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(f_fil);
		close(s_fil);
		exit(98);
	}
	close(f_fil);
	close(s_fil);
	return (0);
}
