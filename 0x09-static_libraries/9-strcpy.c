#include "main.h"
/**
 * _strcpy - a function that copies
 * the string pointed to by src,
 * including the terminating null
 * byte (\0), to the buffer
 * pointed to by dest.
 *
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int count = -1;

	do {
		count++;
		dest[count] = src[count];
	} while (src[count] != '\0');

	return (dest);
}
