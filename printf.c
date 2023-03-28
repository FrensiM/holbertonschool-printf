#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
 *
 */
int _printf(const char *format, ...)
{
	int counter;
	va_list arg;
	const char *ptr;
	/**
	print_t p_functions[] = {
		{"c", p_char},
		{"s", p_str},
		{NULL, NULL},
	};
	*/
	if (format == NULL)
		return (-1);
	va_start(arg, format);

	for (ptr = format; *ptr ; ptr++)
	{
		if (*ptr == '%' && (*ptr + 1) == '%')
		{
			_putchar('%');
			counter++;
			continue;
		}
		else if (*ptr == '%' && (*ptr + 1) != '%')
		{
			switch (*++ptr){
			case 'c':
				counter += p_char(arg);
				break;
			case 's':
				counter += p_str(arg);
				break;
			case '%':
				_putchar('%');
				counter++;
				break;
			case '\0':
				return (-1);

			default:
				_putchar('%');
				_putchar(*ptr);
				counter += 2;
			}
		}

		else
		{
			if (ptr == NULL)
				return (0);
			_putchar(*ptr);
			counter++;
		}
	}
	va_end(arg);
	return (counter);
}
