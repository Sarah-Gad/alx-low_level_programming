#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int num1, num2, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!_isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!_isdigit(argv[2][i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
