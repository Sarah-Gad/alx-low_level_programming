#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - new data type
 * that contains 2 pointers of typr char
 * and one float
 * @name: pointer to string
 * @age: float
 * @owner: pointer to a string
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
