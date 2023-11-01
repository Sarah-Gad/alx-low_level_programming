#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that Concatenates
 * all the arguments of the program.
 *
 *@ac: The number of arguments.
 *@av: the array of strings.
 *
 *Return: A pointer to the con string, or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
	int tot_l = 0;
	int i, j;

	char *con;

	int indx = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			tot_l++;
		}
		tot_l++;
	}
	con = malloc((tot_l + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			con[indx] = av[i][j];

			indx++;
		}
		con[indx] = '\n';
		indx++;
	}
	con[indx] = '\0';

	return (con);
}
