#include "holberton.h"
/**
 * get_func - It identifies the function and assigns the character to function.
 * @s: Pointer thet goes through the array.
 * Return: Returns the function which is assigned.
 **/
int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimals},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_r},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].s != NULL; i++)
	{
		if (ops[i].s[0] == s)
			return (ops[i].f);
	}
	return (NULL);
}
