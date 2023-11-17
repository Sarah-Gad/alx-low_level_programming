#include "lists.h"
/**
 * execute_first - this function is executed first
 * before the main function.
*/
void execute_first(void) __attribute__((constructor));
void execute_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
