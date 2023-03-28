#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_char - fun of printing char
 * @list: list of char
 * Return: return the nr of elements
 */
int p_char(va_list list)
{
	char c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * p_str - fun of printing string
 * @list: list of string
 * Return: return the nr of element
 */
int p_str(va_list list)
{
	int i;
	char *str;
	str = va_arg(list, char *);
	
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
