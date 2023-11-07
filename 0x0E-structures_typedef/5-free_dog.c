#include "dog.h"
/**
 * free_dog - a function that frees dogs.
 * @d: pointer to the dog to free.
*/
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).age);
	free((*d).owner);
	free(d);
}
