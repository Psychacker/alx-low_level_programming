#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: input.
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
int lastdig;
if (n >= 0)
{
lastdig = n % 10;
}
else
{
lastdig = (n % 10) * -1;
}
_putchar('0' + lastdig);
return (lastdig);
}
