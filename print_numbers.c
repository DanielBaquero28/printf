#include "holberton.h"

/**
 * print_decimals - Prints the numbers in decimals format. 
 * @valist: List of decimals.
 * Return: Number of decimals.
**/

int print_decimals(va_list valist)
{
int n, i, j = 1;
int count = 0;

if (n < 0)
{
n = (n * -1);
count = count + _putchar('-'); 
}
i = n;
while (i > 0)
{
i /= 10;
j *= 10;
}
j /= 10;
while (j > 0)
{
count = count + _putchar(((n / j) % 10) + 48);
j /= 10;
}
return(count);
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
