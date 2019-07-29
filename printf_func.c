#include "holberton.h"
/**
 * _printf - Produces poutput according to a format.
 * @format: It´s a character string, defines type of data.
 * Return: Number of charaters printed
 *
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int x;
	int y;

	va_start(valist, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		for (y = 0;  y < 4 ; y++)
		{
			if (format[y] == '%')
			{
				if (format[0 + 1] == *(ops[y].c))
{
					ops[y].f(valist);
					y = 4;
				}
			}
			y = y + 1;
		}
	y = 0;
	}
	_puts("\n");
	va_end(valist);
}
