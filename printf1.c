#include "holberton.h"
/**
 * @format_type: Identifies if format is corrected.
 * @format: It is a character string, defines type of data.
 * @i: Index
 * @count: Number of characters printed.
 * @valist: Hold the information needed to retrieve the additional arguments.
 * Return: Count variable
**/

int format_type(const char *format, int i, int count, va_list valist)
{
	int c;
	if (format[i + 1] == 'c')
	{
		c = va_arg(valist, int);
		_putchar(c);
		count++;
	}
	char *s;
	if (format[i + 1] == 's')
	{
		s = va_arg(valist, char *);
		if (s == NULL)
		{
			s = "(null)";
		}
		while (*s != '\0')
		{
			_putchar(s[i]);
			s++;
			count++;
		}
	}
	if (format[i + 1] == '%')
	{
		int p;
		p = format[i + 1];
		_putchar(p);
		count++;
	}
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
	{
		int d;
		d = va_arg(valist, int);
		if (!d)
		{
			count++;
			putchar(48);
		}
		else
			count = count + print_numbers(d);
	}
}

/**
 * _printf - Produces output according to a format.
 * @format: It is a character string, defines type of data.
 * Return: The number of characters printed.
**/

int _printf(const char *format, ...)
{

}
