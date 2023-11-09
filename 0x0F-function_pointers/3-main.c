#include "3-calc.h"
/**
 * main - check the code
 * @argc: counter of arguments
 * @argv: values of argumens
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int a, b;
	char arr[2];
	int (*func)(int, int);

	arr[0] = argv[2][0];
	arr[1] = '\0';

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (strlen(argv[2]) == 3)
	{
		arr[0] = argv[2][1];
		arr[1] = '\0';
	}

	func = get_op_func(arr);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(a, b));
	return (0);
}
