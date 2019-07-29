#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int x;

	va_start(valist,format);

	for(x = 0; format[x] != '\0'; x++)
		if (format[x] == "%")
			_funcion nombre (x,format);
