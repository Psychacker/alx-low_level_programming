#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase 10 times
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
char ch = "abcdefghijklmnopqrstuvwxyz";
do {
_putchar(ch);
} while (ch < 11);
_putchar('\n');
}
