#include "main.h"

/**
 * print_alphabet - function to print abc
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;
	for (c = "a"; c <= "z"; c++)
	{
		_putcha(c);
	}
_putcha('\n');
}
