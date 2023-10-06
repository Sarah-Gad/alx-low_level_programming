#include <unistd.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program prints a string without any NAME function
 *
 * Return: 1 (error)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
