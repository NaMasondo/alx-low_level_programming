#include <stdio.h>
#include "main.h"
/**
 * main - "prints number of arguments passed to programme"
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);

	return (0);
}