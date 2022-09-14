#include "main.h"
/**
 * _isupper - function that checks if c is uppercase
 * @c: print int.
 *
 * Return: 1 if c is uppercase
 * 0 if anything else
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
