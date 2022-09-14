#include "main.h"
/**
 * _isupper - function that checks if c is uppercase
 * @c: input.
 *
 * Return: 1 if c is uppercase
 * 0 if anything else
 */

int _isupper(int c)
{
char letter;
for (letter = 'A'; letter <= 'Z'; letter++)

if (c == letter)

{
_putchar('c');
_putchar('\n');

return (1);
}
else
{
return (0);
}
}
