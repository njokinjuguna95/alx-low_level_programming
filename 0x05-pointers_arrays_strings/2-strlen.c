#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: char to check
 * Return: Always return 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
