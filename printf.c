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

	print_t p_functions[] = {
		{"c", p_char},
		{"s", p_str},
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
			if (p_functions[j].f_type == NULL)
			{
				counter += _putchar(format[i]);
				counter += _putchar(format[i + 1]);
			}
			if (format[i + 1] == '%')
				counter += _putchar('%');
			i++;
		}
		else
			counter += _putchar(format[i]);
	}
	va_end(arg);
	return (counter);
}
