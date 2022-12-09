#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/**
 * main - entry point
 *
 * Random number positive or negative
 *
 * Return: 0
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
						printf("%d is positive");
					if (n == 0)
						printf("%d is zero");
					if (n < 0)
						printf("%d is negative");

					return (0);

}
