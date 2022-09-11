#include "main.h"
/**
 * _islower - checks for lower case letter
 * @c: input.
 *
 * Return: 1 if c is lower case
 * 0 if c is anything else.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
