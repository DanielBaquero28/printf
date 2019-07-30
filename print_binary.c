#include "holberton.h"

/**
 * print_binary - Prints integers to binaries. 
 * @valist: List of binaries.
 * Return: Count of bytes.
**/

int print_binary(va_list valist)
{
int count, number, i, array[32];

va_arg(valist, int);

i = 0;
count = 0;
if (number < 0)
{
_putchar(48);
count++;
return(count);
}
else
{
while (number > 0)
{
array[count] = number % 2;
number = number / 2;
count++;
}
for (i = count - 1; i >= 0; i--)
{
_putchar(array[i] + 48);
}
}
return (count);
}
