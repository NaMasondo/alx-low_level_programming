#include <stdio.h>
/**
 * main - prints all numbers and some letters
 *
 * Return: always 0
 */
int main(void)
{
	char num;
	char alph;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}

