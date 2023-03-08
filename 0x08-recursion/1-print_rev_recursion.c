#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: The string to be checked
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
