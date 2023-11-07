#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to the struct to print
 * its elements.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if ((*d).age)
	{
		printf("Age: %f\n", (*d).age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
