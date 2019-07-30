#include "holberton.h"

/**
 * print_binary - Prints integers to binaries.
 * @valist: List of binaries.
 * Return: Count of bytes.
**/

int print_binary(va_list valist)
{
int count, i, array[32];
unsigned int number;
number = va_arg(valist, int);

i = 0;
count = 0;
if (number < 1)
{
_putchar(48);
count++;
return (count);
}
else
{
while (number > 0)
{
array[count] = number % 2;
number = number / 2;
count++;
}
i = count - 1;
while(i >= 0)
{
_putchar(array[i] + 48);
i--;
}
}
return (count);
}
