#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print the alphabet
 *
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	_putchar('\n');
}
