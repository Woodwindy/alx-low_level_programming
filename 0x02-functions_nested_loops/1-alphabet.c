#include "main.h"
11;rgb:0000/0000/0000
/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
