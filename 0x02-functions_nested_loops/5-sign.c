#include "main.h"
/**
 * print_sign - print sign of numberes
 * @n: input.
 * Return: 1 and print + if n is greater than 0
 * 0 and print 0 if n equals 0
 * -1 and print - if n is less than 0
 */

int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar('+');
result = 1;
}
if (n == 0)
{
_putchar('0');
result = 0;
}
if (n < 0)
{
_putchar('-');
result = -1;
}
return (result);
}
