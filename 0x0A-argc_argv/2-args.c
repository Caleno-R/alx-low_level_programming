#include <stdio.h>
#include "main.h"

/**
 * main - print the result of the multiplication
 * @argc: counting the arguments
 * @argv: arguments of values
 *
 * Return: 0 (correct)
 */

int main(int argc, char *argv[])
{
/*Declares variables*/
int count = 0;

if (argc > 0)
{
/*To print each argument*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
