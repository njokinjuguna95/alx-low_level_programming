#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/**
 * main - entry point
 *
 * Random number positive or negative
 *
 * Return is always 0
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
						printf("n is positive");
					if (n == 0)
						printf("n is zero");
					if (n < 0)
						printf("n is negative");

					return (0);

}
