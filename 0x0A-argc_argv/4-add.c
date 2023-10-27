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
int main(int argc, char *argv[])
{
	int indx;
	int sum = 0;

	for (indx = 1; indx < argc; indx++)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		else if (*argv[indx] < '0' || *argv[indx] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[indx]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
