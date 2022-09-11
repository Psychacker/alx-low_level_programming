#include "main.h"
/**
 * _isalpha - check if c is a letter
 * @c: input.
 *
 * Return: 1 if c is a letter
 * 0 if anything else
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
