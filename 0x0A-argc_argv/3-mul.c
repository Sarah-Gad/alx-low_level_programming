#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program.
 *
 * @argc: number of the arguments passed
 * to the main function.
 * @argv: pointer to the arguments passed
 * to the main function.
 *
 * Return: 0 if the prpgram recieved 2 arguments
 * 1 if it didn't recieve 2 arguments.
*/
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
