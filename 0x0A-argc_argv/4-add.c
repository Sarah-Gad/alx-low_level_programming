#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program.
 *
 * @argc: number of argumants passed to
 * the main function.
 * @argv: pointer to the arguments passed
 * to the main function.
 *
 * Return: 0 if the addition was completed.
 * 1 if the numbers passed to the program
 * contains symbols.
*/
int main(int argc, char **argv)
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
