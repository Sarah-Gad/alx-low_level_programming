#include "dog.h"
/**
 * init_dog - a function that initialize
 * a variable of type struct dog
 * @d: pointer to the struct
 * @name: pointer to the string
 * @owner: pointer to the string
 * @age: an integer.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
