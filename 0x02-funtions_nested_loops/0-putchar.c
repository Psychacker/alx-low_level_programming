#include "main.h"
/*
 * main - Print " Holberton" followed by a new line.
 * Desription - You are not allowed to use standard libraries.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	char holberton[10] = "_putchar\n";

	while (c < 9)
	{
		_putchar(holberton[c]);
		c++;
	}
	return (0);
}
