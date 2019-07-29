#include "holberton.h"
/**
 * get_func - It will identify the function and will assign the character to whe  n the character with its function.
 * @s: Pointer thet goes through the array.
 * Return: Returns the function which is assigned.
 **/
int (*get_func(char s))(va_list)
{
	op_ ops [] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_int},
		{NULL, NULL}
	};
	int i;
	for (i = 0; ops[i].c != NULL; i++)
	{
		if(*ops[i].c == s)
			return (ops[i].f);
	}
	return (NULL);
}
