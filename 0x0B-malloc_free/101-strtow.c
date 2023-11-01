#include "main.h"
#include <stdlib.h>

/**
 * letters_count - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @str: '*s' is a pointer
 * @size: 'size' is the size of the string
 *
 * Return: Always 0.
*/

int letters_count(char *str, int size)
{
	int i;
	int sw = 0, j;

	for (i = 0; i < size; i++)
	{
		if (str[i] != ' ')
		{
			j = i + 1;
			while (str[j] != ' ' && str[j] != '\0')
			{
				j++;
			}
			sw++;
			i = j - 1;
		}
	}
	return (sw);
}

/**
 * word_count - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @str: '*s' is a pointer
 * @size: 'size' is the size of the string
 *
 * Return: Always 0.
*/

int word_count(char *str, int size)
{
	int i, words = 0;

	for (i = 0; i < size; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && (i + 1) < size)
			words++;
	}
	return (words);
}

/**
 * _strlen - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
	int len = 0;
	while (s[len] != 0)
		len++;
	return (len);
}

/**
 * strtow - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @str: '*s1' is a pointer recieved from another function
 *
 * Return: 0 on success
*/

char **strtow(char *str)
{
	int size, i, j, x, y, letters;
	int flag = 0;
	char **ptr;
	if (str == NULL || *str == '\0' || (*str == ' ' && str[1] == '\0'))
		return (NULL);
	while (*str != '\0' && *str == ' ')
		str++;
	size = _strlen(str);
	letters = letters_count(str, size) + 1;
	ptr = (char **)malloc(letters *sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[letters - 1] = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			for (j = 0; str[i + j] != ' ' && str[i + j] != '\0'; j++)
				;
			ptr[flag] = (char *)malloc((j + 1) * sizeof(char));
			if (ptr[flag] == NULL)
			{
				for (x = 0; x < flag; x++)
					free(ptr[x]);
				free(ptr);
				return (NULL);
			}
			for (y = 0; y < j; y++)
				ptr[flag][y] = str[i + y];
			ptr[flag][y] = '\0';
			flag++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
