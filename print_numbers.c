#include "holberton.h"

/**
 * print_decimals - Prints the numbers in decimals format.
 * @valist: List of decimals.
 * Return: Number of decimals.
**/

int print_decimals(va_list valist)
{
	int count = 0;
	long int num, i, j = 1;
num = va_arg(valist, int);
if (num < 0)
{
num = (num * -1);
count = count + _putchar('-');
}
if ( num == 0)
{	_putchar(48);
	 return (1);
}
i = num;

while (i > 0)
{
i /= 10;
j *= 10;
}
j /= 10;
while (j > 0)
{
count = count + _putchar(((num / j) % 10) + 48);
j /= 10;
}
return (count);
}

/**
 * print_int - Prints the integers
 * @valist: List of integers.
 * Return: Number of integers.
**/

int print_int(va_list valist)
{
return (print_decimals(valist));
}
