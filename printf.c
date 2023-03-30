#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - printing all
 * @format: format
 * Return: return the value of printed characters
 */
int _printf(const char *format, ...)
{
	int counter;
	va_list arg;
	int i, j;

	print_t p_functions[] = {{"c", p_char}, {"s", p_str},
		{"i", p_int},
		{"d", p_int},
		{NULL, NULL},
	};
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; p_functions[j].f_type != NULL; j++)
			{
				if (format[i + 1] == p_functions[j].f_type[0])
				{
					counter += p_functions[j].f(arg);
					break;
				}
			}
			if (format[i + 1] == '%')
				counter += _putchar('%');
			else if (format[i + 1] == '\0')
				return (-1);
			else if (p_functions[j].f_type == NULL && format[i + 1] != '%')
			{
				counter += _putchar(format[i]);
				counter += _putchar(format[i + 1]);
			}
			i++;
		}
		else
			counter += _putchar(format[i]);
	} va_end(arg);
	return (counter);
}
