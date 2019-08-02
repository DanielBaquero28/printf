#include "holberton.h"

/**
 * print_decimals - Prints the numbers in decimals format.
 * @valist: List of decimals.
 * Return: Number of decimals.
**/

int print_decimals(va_list valist)
{
int count = 0;
long int num, sec_count = 1, sec_num;
num = va_arg(valist, int);
if (num < 0)
{
num = (num * -1);
count = count + _putchar('-');
}
if (num == 0)
{
_putchar(48);
return (1);
}
sec_num = num;
while (sec_num > 9)
{
sec_num /= 10;
sec_count *= 10;
}
while (sec_count > 0)
{
count = count + _putchar(((num / sec_count) % 10) + 48);
sec_count /= 10;
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
