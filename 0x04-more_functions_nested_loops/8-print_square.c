#include "holberton.h"

/**
 * print_square - prints a square on the terminal
 * @size: the size of the sqaure
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	_putchar('\n');
}
