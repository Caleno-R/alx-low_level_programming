#include <stdio.h>
#include "main.h"

/**
 * main - print the new name, without having to compile it again
 * @argc: counting the arguments
 * @argv: arguments of values
 *
 * Return: 0 (correct)
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
