#include "main.h"

/**
 * _strlen - prints the length of a string
 * @str: variable containing the string
 * Return: length of @str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
