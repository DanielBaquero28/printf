#include "holberton.h"

/**
 * print_char - Print characters.
 * @valist: Stores the list of characters.
 * Return: Number of characters printed.
**/

int print_char(va_list valist)
{
  int c;
  c = va_arg(valist, int);
  return(_putchar(c));
}

/**
 * print_string - Prints set of characters. (String)
 * @valist: Stores the list of strings.
 * Return: Number of strings printed.
**/

int print_string(va_list valist)
{
  int i, count = 0;
  char *s;

  s = va_arg(valist, char *);
  if (s == NULL)
    s = "(null)";
  for(i = 0; s[i]; i++)
    {
    count = count + _putchar(s[i]);
    }
  return (count);
}
