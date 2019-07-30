#include "holberton.h"
/**
 * _printf - Produces poutput according to a format.
 * @format: It´s a character string, defines type of data.
 * Return: 0
**/

int _printf(const char *format, ...)
{
va_list valist;
int x;

va_start(valist, format);

for (x = 0; format[x] != '\0'; x++)
{
if (format[x] == '%')
{
get_func(format[x + 1])(valist);
x += 2;
}
_putchar(format[x]);
}
va_end(valist);
return (0);
}
