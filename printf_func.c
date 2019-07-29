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

	va_start(valist, format);

	for (x = 0; format[x] != '\0'; x++)
		if (format[x] == "%")
		{
			_funcion_nombre(x, format);
		}
	va_end(valist);
}
