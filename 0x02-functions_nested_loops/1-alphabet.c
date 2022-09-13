#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * print alphabet  - function to print abc
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

