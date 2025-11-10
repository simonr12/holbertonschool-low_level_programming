#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 *
 * @argc: the number of command-line arguments
 * @argv: array containing the program command-line arguments
 *
 * Return: always 0 (succes(++++++)
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
