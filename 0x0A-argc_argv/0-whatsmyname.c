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
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
