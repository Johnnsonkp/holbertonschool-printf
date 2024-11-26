#include "main.h"

/**
 * print_number - Prints an integer to stdout
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */

int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
	count += _putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}

	if (num / 10)
	count += print_number(num / 10);

	count += _putchar((num % 10) + '0');
	return (count);
}
