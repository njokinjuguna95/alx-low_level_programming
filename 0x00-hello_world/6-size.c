# include <stdio.h>

/**
 *
 *  * main - print data type sizes
 *
 *   *
 *
 *    * Return: 0
 *
 *    */

int main(void)

{

	char a;

	int b;

	long int c;

	long long int d;

	float f;



	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));

	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));

	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}

to check for errors run:

betty 6-size.c

to compile:

gcc 6-size.c -m64 -o size64 2> /tmp/64

gcc 6-size.c -m32 -o size32 2> /tmp/32
