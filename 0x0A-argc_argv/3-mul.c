#include <stdio.h>

/**
 * main - multiplies two numbers and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;
	
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
	printf("Multiplication of %d and %d is %d\n", a, b, (a*b));

	return (0);
}
