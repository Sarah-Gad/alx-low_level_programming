#include "main.h"
/**
 *cpy - a helper function that copies content from one file to another
 * @src: source file
 * @dest: destination file
*/
void cpy(file_t *src, file_t *dest)
{
	int chars_r, chars_w;
	char buffer[1024];

	while (1)
	{
		chars_r = read(src->fd, buffer, 1024);
		if (chars_r == -1)
		{
			close(src->fd);
			close(dest->fd);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src->name);
			exit(98);
		}
		chars_w = write(dest->fd, buffer, chars_r);
		if (chars_w == -1)
		{
			close(src->fd);
			close(dest->fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest->name);
			exit(99);
		}
		if (chars_r < 1024)
			break;
	}
}
/**
 * main - Entry point to the program
 * @argc: num of args
 * @argv: pointer to the first arg.
 * Return: 0 if succeed
*/
int main(int argc, char *argv[])
{
	file_t src, dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src.name = argv[1];
	src.fd = -1;
	dest.name = argv[2];
	dest.fd = -1;

	src.fd = open(src.name, O_RDONLY);
	if (src.fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src.name);
		exit(98);
	}
	dest.fd = open(dest.name, O_WRONLY | O_TRUNC | O_CREAT, 0x01B4);
	if (dest.fd == -1)
	{
		close(src.fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest.name);
		exit(99);
	}
	cpy(&src, &dest);
	if (close(src.fd) == -1)
	{
		close(dest.fd);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", src.fd);
		exit(100);
	}
	if (close(dest.fd) == -1)
	{
		close(src.fd);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dest.fd);
		exit(100);
	}
	exit(0);
}
