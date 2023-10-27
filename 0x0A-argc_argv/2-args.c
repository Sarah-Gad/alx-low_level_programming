#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program.
 *
 * @argc: number of arguments passed to
 * the main function
 * @argv: ponter to the arguments passed
 * to the main function.
 *
 * Return: 0 always success.
*/

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
