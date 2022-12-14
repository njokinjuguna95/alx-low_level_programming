#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always return 0
 */

void print_alphabet(void)
{
	char i;

	i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		_putchar (i);
	_putchar('\n');
}
