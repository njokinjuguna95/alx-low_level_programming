#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)

{
		char i;

		i = 'a';

		for (i = 'a'; i <= 'z'; i++)

			{

			if (i != 'e' && i != 'q')

				putchar(i);
			}

		putchar('\n');
		return (0);
}
