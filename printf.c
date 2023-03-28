#include <stdarg.h>
#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	int i;j;
	va_list arg;

	print_t p_functions[] = {
		{"c", p_char},
		{"s", p_str},
		{NULL, NULL},
	};
	va_start(arg, format);


}
