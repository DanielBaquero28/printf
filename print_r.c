#include "holberton.h"

/**
 * print_rev - Funtion to print a string
 * @s:  String to be printed backwards
 * Return: counter
 */

int print_rev(char *s)

{
	int num = 0;
	int count = 0;

	for (num = 0; s[num] != '\0'; num++)
	{
	}
	count = num;
	while (num > '\0')
	{
		num--;
		_putchar(s[num]);
	}
	return (count);
}

/**
 * print_r - will print a string in reverse
 * @valist: string to be reversed
 *
 * Return: print_rev function
 */

int print_r(va_list valist)
{
	char *cont = va_arg(valist, char*);

	return (print_rev(cont));

}
