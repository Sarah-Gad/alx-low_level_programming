#ifndef DOG_H
#define DOG_H
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
}

#endif
