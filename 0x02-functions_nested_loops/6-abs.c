#include "main.h"
/**
 * _abs - absolute value of an integer
 * @r: input.
 *
 * Return: absolute value.
 */

int _abs(int r)
{
if (r > 1)
{
r = r * 1;
}
if (r == 0)
{
r = 0;
}
if (r < 1)
{
r = r * -1;
}
return (r);
}
