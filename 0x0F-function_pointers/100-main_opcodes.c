#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code
 * @argc: counter of arguments
 * @argv: values of argumens
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
	int buffer;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	buffer = atoi(argv[1]);
	if (buffer < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (buffer)
	{
		buffer--;
		printf("%02hhx", *ptr);
		ptr++;
		if (buffer)
		{
			printf(" ");
		}
		else
			printf("\n");
	}
	return (0);
}
