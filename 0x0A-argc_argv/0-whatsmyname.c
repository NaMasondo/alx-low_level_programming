#include <stdio.h>
#include "main.h"
/**
 * main - "prints programme name followed by newline"
 *
 * @argc: argument count
 * @argv: arguments supplied to programme
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
