# include <stdio.h>

/**
 *
 *  * main - printing a line of code using printf
 *
 *   *
 *
 *    * Return: 1
 *
 *    */

int main(void)

{

	printf("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	return (1);

}

run betty after:

betty 101-quote.c

compile:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c

run this too :

./quote
