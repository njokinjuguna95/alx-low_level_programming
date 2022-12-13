#include <stdio.h>
/**
 * main - lowercase then uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		{
		putchar(i);
		}
	for (i = 'A'; i <= 'Z'; i++)
		{
		putchar(i);
		}
	putchar('\n');
	return (0);
}
